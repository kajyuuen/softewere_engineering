#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct station{
  char name[30];
  char arrivalTime[10];
  char departureTime[10];
  struct station* next;
} station;

//リストに追加する
station *add_stasion(char *name, char *arrivalTime, char *departureTime, station *head){
  station *p;
  
  p = (station*)malloc(sizeof(station));
  
  strcpy(p->name,name);
  strcpy(p->arrivalTime,arrivalTime);
  strcpy(p->departureTime,departureTime);

  p->next = head; //先頭ポインタを次のポインタに
  head = p;  //今のポインタを先頭ポインタに
  
  return head;
}

//リストの表示
void show_list(station *p)
{
  while (p != NULL) {
    printf("%s %s %s\n", p->name, p->arrivalTime, p->departureTime);
    p = p->next;
  }
}

int main(){
  station *head;

  head = NULL;
  head = add_stasion("Tsukuba", "10:00", "10:05", head);
  head = add_stasion("Nagareyama", "10:30", "10:35", head);
  head = add_stasion("Akihabara", "11:00", "11:05", head);

  show_list(head);

  return 0;
}
