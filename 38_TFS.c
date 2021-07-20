#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num%3==0 && num%5==0 && num%7==0){printf("7");}
  else if(num%3==0 && num%5==0){printf("3");}
  else if(num%5==0 && num%7==0){printf("6");}
  else if(num%3==0 && num%7==0){printf("5");}
  else if(num%3==0){printf("1");}
  else if(num%5==0){printf("2");}
  else if(num%7==0){printf("4");}
  else{printf("0");}
}
