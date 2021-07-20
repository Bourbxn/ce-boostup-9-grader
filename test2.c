#include<stdio.h>
int main(){
  long int year,ad;
  scanf("%ld", &year);
  ad=year-543;
  if(ad<0){
    printf("error");
  }
  else{
    if(ad%4==0){
      printf("365");
    }
    else{
      printf("366");
    }
  }

}
