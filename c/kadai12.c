#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y){
  int p = *x;
  *x = *y;
  *y = p;
}
  

int main(){
  int x,y;
  scanf("%d %d",&x,&y);
  printf("変数xの値は%d,変数yの値は%dです\n",x,y);

  swap(&x,&y);
  printf("swap()呼び出し後の変数xの値は%d,変数yの値は%dです\n",x,y);
  
}
