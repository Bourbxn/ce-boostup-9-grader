#include<stdio.h>
int main(){
  long int year;
  scanf("%ld", &year);
  if(year>=0){
    if(year%4==0){
      printf("366");
    }
    else{
      printf("365");
    }
  }
  else{
    printf("error");
  }

}
