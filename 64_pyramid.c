#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num<=1){
    printf("ERROR");
    return 0;
  }
  for(int i=0;i<num;i++){
    for(int j=0;j<num-1-i;j++)printf(" ");
    for(int k=0;k<2*i+1;k++)printf("*");
    if(i!=num-1){
      printf("\n");
    }
  }
}
