#include<stdio.h>
int main(){
  char cin[10000];
  int i=0;
  scanf("%s", &cin);
  while(cin[++i]!='\0');
  for(int j=0;j<i;j++){
    if(cin[j]==cin[j+1])printf("%c*", cin[j]);
    else{printf("%c", cin[j]);}
  }
}
