#include<stdio.h>
#include<math.h>

double zeta(){
  int n = 0;
  double sum = 0;
  for( n = 1; n < 10000; n++ ){
    sum += 1.0/(n*n);
  }
  return sum;
}

int main(){
  printf("PI=%f\n",sqrt(zeta()*6));
}
