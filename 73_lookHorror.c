#include<stdio.h>
int main(){
  char cin[10000];
  scanf("%[^\n]", &cin);
  int j=0;
  while(cin[++j]!='\0');
  for(int i=0;i<j;i++){
    if(cin[i]!=cin[i+1] && i!=j-1)printf("%c\n", cin[i]);
    else{
      printf("%c", cin[i]);
    }
  }
}
