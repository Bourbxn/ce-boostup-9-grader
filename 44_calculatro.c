#include<stdio.h>
int main(){
  int i,num1,num2,result,digit=0;
  char strnum[100];
  scanf("%d", &num1);
  sprintf(strnum,"%d",num1);
  for(i=0;i<100;i++){
    if(strnum[i]=='\0'){i=100;}
    else{
      digit++;
    }
  }
  printf("%d\n", digit);
  //printf("%s", strnum);
}
