#include<stdio.h>
int main(){
  char cin[10000];
  int i=0;
  scanf("%[^\n]", &cin);
  while(cin[++i]!='\0');
  for(int j=0;j<i;j++){
    if((cin[j]>=65 && cin[j]<=90)||(cin[j]>=97 && cin[j]<=122) ||(cin[j]>=48 && cin[j]<=57) || cin[j]==32){
      printf("%c", cin[j]);
    }
  }
}
