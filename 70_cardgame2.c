#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num<=1){
    printf("Error");
    return 0;
  }
  for(int i=0;i<num;i++){
    for(int j=0;j<num-i-1;j++)printf(" ");
    if(i==0)printf("*");
    else{
      printf("*");
      for(int k=0;k<2*i-1;k++)printf(" ");
      printf("*");
    }
    printf("\n");
  }
  for(int i=0;i<num-1;i++){
    if(i==num-2){
      for(int j=0;j<i+1;j++)printf(" ");
      printf("*");
    }
    else{
      for(int j=0;j<i+1;j++)printf(" ");
      printf("*");
      for(int k=0;k<2*(num-i-2)-1;k++)printf(" ");
      printf("*");
    }
    if(i!=num-2)printf("\n");
  }
}
