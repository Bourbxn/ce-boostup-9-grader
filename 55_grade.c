#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num>=80 && num<=100)printf("A");
  else if(num>=75 && num<80)printf("B+");
  else if(num>=70 && num<75)printf("B");
  else if(num>=65 && num<70)printf("C+");
  else if(num>=60 && num<65)printf("C");
  else if(num>=55 && num<60)printf("D+");
  else if(num>=50 && num<55)printf("D");
  else if(num>=0 && num<50)printf("F");
  else if(num>100 || num<0){
    printf("ERROR");
  }
}
