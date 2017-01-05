#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct station{
  char name[30];
  char arrivalTime[10];
  char departureTime[10];
  struct station* next;
} station;

// リストに追加する
station *add_stasion(char *name, char *arrivalTime, char *departureTime, station *head){
  station *p;
  
  p = (station*)malloc(sizeof(station));
  
  strcpy(p->name,name);
  strcpy(p->arrivalTime,arrivalTime);
  strcpy(p->departureTime,departureTime);

  p->next = head; // 先頭ポインタを次のポインタに
  head = p;  // 今のポインタを先頭ポインタに
  
  return head;
}

// リストの表示
void show_list(station *p)
{
  while (p != NULL) {
    printf("%s %s %s\n", p->name, p->arrivalTime, p->departureTime);
    p = p->next;
  }
}

// リストの挿入
station *insert_stasion(int n, char *name, char *arrivalTime, char *departureTime, station *head){
  int cnt;
  cnt = 0;
  station *p = head;
  station *q;

  while(p != NULL){
    if( cnt == n ){
      break;
    }else{
      p = p->next;
      cnt++;
    }
  }
  
  printf("%s %s %s\n", p->name, p->arrivalTime, p->departureTime);
  q = (station*)malloc(sizeof(station));

  strcpy(q->name,name);
  strcpy(q->arrivalTime,arrivalTime);
  strcpy(q->departureTime,departureTime);

  q->next = p->next;
  p->next = q;
  
}

  
int main(){
  station *head;
  int n;
  char name[30];
  char arrivalTime[10];
  char departureTime[10];
  
  head = NULL;
  head = add_stasion("Tsukuba", "10:00", "10:05", head);
  head = add_stasion("Nagareyama", "10:30", "10:35", head);
  head = add_stasion("Akihabara", "11:00", "11:05", head);
  
  show_list(head);

  printf("挿入場所 名前 到着時間 出発時間\n");
  while(scanf("%d %s %s %s", &n, name, arrivalTime, departureTime) != EOF ){
    if( n > 0 ){
      insert_stasion(n, name, arrivalTime, departureTime, head);
    }else{
      head =add_stasion(name, arrivalTime, departureTime, head);
    }
  }

  show_list(head);
  
  return 0;
}
