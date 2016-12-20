#include<stdio.h>
#include<math.h>

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
  double e = 0;
  for( int i = 0; i < 10 ; i++ ){
    e += 1.0/fact(i);
  }

  printf("%f\n",e);
}
