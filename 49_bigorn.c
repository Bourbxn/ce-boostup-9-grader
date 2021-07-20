#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num<=1){
    printf("ERROR");
  }
  else{
    for(int i=0;i<num;i++){
      if(i==0){
        printf("/");
        for(int j=0;j<num-2;j++){
          printf("-");
        }
        printf("\\\n");
      }
      else if(i==num-1){
        printf("\\");
        for(int j=0;j<num-2;j++){
          printf("-");
        }
        printf("/");
        for(int k=0;k<num;k++)printf("n");
      }
      else{
        printf("|");
        for(int j=0;j<num-2;j++)printf(" ");
        printf("|\n");
      }
    }
  }
}
