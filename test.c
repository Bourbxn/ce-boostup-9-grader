#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  for(int i=1;i<num+1;i++){
    for(int j=0;j<i;j++){
      printf("*");
    }
    if(i==num)printf("");
    else{printf("\n");}
  }
}
