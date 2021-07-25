#include<stdio.h>
int main(){
  char cin[10000];
  int j=0;
  scanf("%[^\n]", &cin);
  while(cin[++j]!='\0');
  for(int k=0;k<j;k++){
    if(cin[k]==32){
      printf("ERROR");
      return 0;
    }
  }
  for(int i=0;i<j;i++){
    if(cin[i]!=cin[i+1])printf("%c", cin[i]);
    else{
      printf("");
    }
  }
}
