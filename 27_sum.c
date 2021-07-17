#include<stdio.h>
int main(){
  long int num,sum=0;
  scanf("%ld", &num);
  if(num<0 ){
    printf("Error");
  }
  else{
    while (num>0) {
      sum+=num;
      num--;
    }
    printf("%ld", sum);

  }

}
