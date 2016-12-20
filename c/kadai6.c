#include<stdio.h>

int getSmallestFactor(int a){
  int i = 2;
  while( i*i <= a){
    if( a%i == 0 ){
      return i;
    }
    i++;
  }
  return 0;
}

int main(){
  int num;
  scanf("%d",&num);

  printf("%d",getSmallestFactor(num));
  num /= getSmallestFactor(num);
  
  while(true){
    int nowsmall = getSmallestFactor(num);
    if( nowsmall == 0 ){
      printf("\n");
      break;
    }else{
      printf("*%d",nowsmall);
    }
    num /= nowsmall;
  }
  
}
