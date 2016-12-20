#include<stdio.h>

int fact(int n){
  int m;
  if( n == 0 ){
    return 1;
  }else{
    m = fact(n-1);
    return n*m;
  }
}

int main(){
  int num;
  scanf("%d",&num);
  printf("%d\n",fact(num));
}
