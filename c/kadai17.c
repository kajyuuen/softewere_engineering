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
  char name[30];
  char arrivalTime[10];
  char departureTime[10];
  
  head = NULL;
  printf("名前 到着時間 出発時間\n");
  while(scanf("%s %s %s", name, arrivalTime, departureTime) != EOF ){
    head = add_stasion(name, arrivalTime, departureTime, head);
  }

  show_list(head);

  return 0;
}
