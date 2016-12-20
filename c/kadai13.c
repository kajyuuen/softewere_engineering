#include<stdio.h>
#include<stdlib.h>

typedef struct goods{
  char code[10];
  char name[40];
  int price;
} goods;

int main(){
  goods data[100];

  int i;
  for( i = 0; i < 3; i++ ){
    scanf("%s",data[i].code);
    printf("商品コード:%s\n",data[i].code);
    scanf("%s",data[i].name);
    printf("商品名:%s\n",data[i].name);
    scanf("%d",&data[i].price);
    printf("値段:%d\n\n",data[i].price);
  }
  
}
