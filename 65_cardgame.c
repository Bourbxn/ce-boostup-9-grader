#include<stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  if(num<1){
    printf("Error");
    return 0;
  }

  for(int i=0;i<num;i++){
    for(int j=0;j<num-i-1;j++)printf(" ");
    for(int k=0;k<i+1;k++){
      if(k==i)printf("*");
      else{printf("* ");}
    }
    printf("\n");
  }
  for(int i=0;i<num-1;i++){
    for(int j=0;j<i+1;j++)printf(" ");
    for(int k=0;k<num-1-i;k++){
      if(k==num-2-i)printf("*");
      else{printf("* ");}
    }
    if(i!=num-2)printf("\n");
}
}
