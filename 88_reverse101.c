#include<stdio.h>
int main(){
  char num[10000];
  scanf("%s", &num);
  int i=0;
  while(num[++i]!='\0');
  for(int j=0;j<i;j++){
    int a = num[j]-'0';
    printf("%d", a+48);
  }
}
