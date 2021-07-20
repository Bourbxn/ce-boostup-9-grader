#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  for(int i=0;i<num;i++){
    for(int j=0;j<i;j++)printf(" ");
    for(int k=0;k<num-i;k++)printf("*");
    if(i==num-1)printf("");
    else{printf("\n");}
  }

}
