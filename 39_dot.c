#include<stdio.h>
int main(){
  int i,j=0;
  char num[100];
  scanf("%s", &num);
  for(i=0;i<100;i++){
    if(num[i]=='.'){
      printf("FALSE");
      j++;
      break;
    }
  }

}
