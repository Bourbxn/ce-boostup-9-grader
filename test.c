#include<stdio.h>
int main(){
  char digit[100];
  int num1,num2,total,i=0;
  scanf("%d %d", &num1, &num2);
  total = num1+num2;
  sprintf(digit,"%d",total);
  while(digit[++i]!='\0');
  printf("%d", i);
}
