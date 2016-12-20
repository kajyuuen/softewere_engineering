#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct _station{
  char name[30];
  char arrivalTime[10];
  char departureTime[10];
  struct station* next;
} station;

int main(){
  staion *p, *s;
  int i = 0;

  for( i = 0; i < 3; i++ ){
    if(i == 0){
      p = (station*)malloc(sizeof(station*));
      s = p;
    }else{
      p->next = (station*)malloc(sizeof(station*));
      p = p->next;
    }
  }
  p->next = NULL;
  strcpy(p[0].name,"Tsukuba");
  strcpy(p[0].arrivalTime,"10:00");
  strcpy(p[0].departureTime,"10:05");
  strcpy(p[1].name,"Nagareyama");
  strcpy(p[1].arrivalTime,"10:30");
  strcpy(p[1].departureTime,"10:35");
  strcpy(p[2].name,"Akihabara");
  strcpy(p[2].arrivalTime,"11:00");
  strcpy(p[2].departureTime,"11:05");

  while (p != NULL) {
    printf("%s %s %s\n", p->name, p->arrivalTime, p->departureTime);
    p = p -> next;
  }
  
  return 0;
}
