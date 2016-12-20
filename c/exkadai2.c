#include<stdio.h>

int pow(int num,int n){
  int fnum = num;
  if ( n > 0 ){
    for(int i = 0 ; i < n - 1 ; i++ ){
      num *= fnum;
    }
    return num;
  }else if(n == 0){
    return 1;
  }
  
}

int main(){
  int i = 0;
  double arctan1 = 0;
  double d;
  while(i < 10000){
    arctan1 += (double)pow(-1,i) / (i*2 + 1);
    if(i % 100 == 0){
      printf("pi = %f\n", arctan1 * 4);
    }
    i++;
  }
}
