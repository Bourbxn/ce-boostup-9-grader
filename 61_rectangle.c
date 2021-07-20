#include<stdio.h>
int main(){
  int h,l;
  scanf("%d %d", &h, &l);
  if(h<1 || l<1){
    printf("error");
    return 0;
  }
  for(int i=0;i<h+1;i++){
    if(i==0){
      printf(" ");
      for(int j=0;j<l;j++)printf("_");
      printf("\n");
    }
    else if(i==h){
      printf("|");
      for(int j=0;j<l;j++)printf("_");
      printf("|");
    }
    else{
      printf("|");
      for(int j=0;j<l;j++)printf(" ");
      printf("|");
      printf("\n");
    }
  }
}
