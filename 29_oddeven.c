#include<stdio.h>
int main(){
  double num;
  scanf("%lf", &num);
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
