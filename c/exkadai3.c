#include<stdio.h>

#define P 3.141592
// return num^n
double pow(double num,int n){
  double fnum = num;
  if ( n > 0 ){
    for(int i = 0 ; i < n - 1 ; i++ ){
      num *= fnum;
    }
    return num;
  }else if(n == 0){
    return 1;
  }
}

//return n!
int fact(int n){
  int m;
  if( n == 0 ){
    return 1;
  }else{
    m = fact(n-1);
    return n*m;
  }
}

float mysin(float x){
  float ans = 0;
  int n = 0;
  for( n = 0; n < 10; n++ ){
    ans += pow(-1,n)*pow(x,2*n+1)/fact(2*n+1);
  }
  return ans;
}

float mycos(float x){
  float ans = 0;
  int n = 0;
  for( n = 0; n < 10; n++ ){
    ans += pow(-1,n)*pow(x,2*n)/fact(2*n);
  }
  return ans;
}

int main(){
  printf("%f\n",P);
  printf("sin(P/6):%f\n",mysin(P/6));
  printf("cos(P/6):%f\n",mycos(P/6));
  printf("sin(P/2):%f\n",mysin(P/2));
  printf("cos(P/2):%f\n",mycos(P/2));
}
