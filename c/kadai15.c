#include<stdio.h>
#include<stdlib.h>
typedef struct person{
  char name[30];
  char address[40];
  int birthyear;
} person;

typedef struct company{
  person coe,employee;
} company;

int main(){
  company softbank;
  printf("coeの情報を入力してください\n");
  scanf("%s",softbank.coe.name);
  scanf("%s",softbank.coe.address);
  scanf("%d",&softbank.coe.birthyear);
  printf("employeeの情報を入力してください\n");
  scanf("%s",softbank.employee.name);
  scanf("%s",softbank.employee.address);
  scanf("%d",&softbank.employee.birthyear);

  printf("coeの情報\n");
  printf("%s\n",softbank.coe.name);
  printf("%s\n",softbank.coe.address);
  printf("%d\n",softbank.coe.birthyear);
  printf("employeeの情報\n");
  printf("%s\n",softbank.employee.name);
  printf("%s\n",softbank.employee.address);
  printf("%d\n",softbank.employee.birthyear);
}

