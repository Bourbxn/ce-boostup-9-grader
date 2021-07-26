#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  for(int i=0;i<((num+1)/2)-1;i++){                 //บน
    if(i==0){
      for(int j=0;j<num;j++){
        printf("*");
      }
    }
    else{
      printf("*");
      for(int j=0;j<i-1;j++)printf(" ");
      printf("*");
      for(int j=0;j<num-2*(i+1);j++)printf(" ");
      printf("*");
      for(int j=0;j<i-1;j++)printf(" ");
      printf("*");
    }
    printf("\n");
  }

  printf("*");                                      //กลาง
  for(int i=0;i<((num+1)/2)-2;i++)printf(" ");
  printf("*");
  for(int i=0;i<((num+1)/2)-2;i++)printf(" ");
  printf("*");



}
