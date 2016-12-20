#include<stdio.h>
#include<stdlib.h>

int main(){

  char* str = (char *)malloc(sizeof(char)*100);

  scanf("%s",str);

  int n = 0;
  while( *str != '\0'){
    printf("%c",*str);
    str++;
    n++;
  }
  printf("\n");

  int i;
  for( i = 0; i < n+1; i++ ){
    printf("%c",*(str-i));
  }

  printf("\n");
  
}
