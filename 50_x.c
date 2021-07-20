#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num<1){
    printf("Error");
  }
  else{
    for(int i=0;i<num;i++){                           //ครึ่งแรก
      for(int j=0;j<i;j++)printf(" ");
      printf("*");
      for(int j=0;j<(2*num-1)-(2*i);j++)printf(" ");
      printf("*");
      printf("\n");
    }
    for(int i=0;i<num;i++)printf(" ");                //กลาง
    printf("*\n");
    for(int i=num-1;i>-1;i--){                         //ครึ่งหลัง
      for(int j=0;j<i;j++)printf(" ");
      printf("*");
      for(int j=0;j<(2*num-1)-(2*i);j++)printf(" ");
      printf("*");
      printf("\n");
    }
  }
}
