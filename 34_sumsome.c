#include<stdio.h>
int main(){
  int num1,num2,i,sum=0;
  scanf("%d %d", &num1, &num2);
  if(num1<=num2){
    for(i=num1;i<=num2;i++){
      sum+=i;
    }
  }
  else{
    for(i=num2;i<=num1;i++){
      sum+=i;
    }
  }

  printf("%d", sum);
}
