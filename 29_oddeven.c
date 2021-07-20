#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num>1000000){
    printf("Error");
  }
  else{
    if(num%2==0){
      printf("even");
    }
    else{
      printf("odd");
    }
  }
}
