#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num%2==0){
    printf("even");
  }
  else if(num%2!=0){
    printf("odd");
  }
  else{
    printf("Error");
  }

}
