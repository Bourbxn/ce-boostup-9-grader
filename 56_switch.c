#include<stdio.h>
int main(){
  char cin[10000];
  int i=0;
  scanf("%[^\n]", &cin);
  while(cin[++i]!='\0');
  for(int j=i-1;j>=0;j--){
    printf("%c", cin[j]);
  }
}
