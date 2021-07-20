#include<stdio.h>
int main(){
  char num[100];
  int i=0;
  scanf("%s", &num);
  while(num[++i]!=0);
  for(int j=0;j<i;j++){
    if(num[j]=='0')printf("1");
    else if(num[j]=='1')printf("0");
  }
}
