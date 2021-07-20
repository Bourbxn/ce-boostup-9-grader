#include<stdio.h>
int main(){
  long int year,ad;
  scanf("%ld", &year);
  ad=year-543;
  if(year>=0){
    if(ad%4==0 || ad<0){
      if(ad%100!=0){
        printf("365");
      }
      else{
        if(ad%400==0){
          printf("365");
        }
        else{
          printf("366");
        }
      }
    }
    else{
      printf("366");
    }
  }
  else{
    printf("error");
  }
}
