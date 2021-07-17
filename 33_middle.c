#include<stdio.h>
int main(){
  int num,j,i;
  scanf("%d", &num);
  for(i=0;i<11;i++){
    printf("%d\n", num-10+i);
  }
  for(j=1;j<10;j++){
    printf("%d\n", num+j);
  }
  printf("%d", num+10);
}
