#include<stdio.h>
#include<stdlib.h>

int main(){

  int* p = (int *)malloc(sizeof(int)*10);

  int i = 0;
  for( i = 0; i < 10; i++ ){
    scanf("%d",p+i);
  }

  for( i = 0; i < 10; i++ ){
    printf("値:%d アドレス:%p\n",*(p+i),p+i);
  }

}
