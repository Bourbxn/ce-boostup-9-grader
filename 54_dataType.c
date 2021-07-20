#include<stdio.h>
int main(){
  char cin[10000];
  int i=0;
  scanf("%[^\n]", &cin);
  while(cin[i]!='\0'){
    if(cin[i]<48 || cin[i]>57 || cin[i]!='.'){
      printf("%c\n", cin[i]);
      printf("STRING !!!!!");
      return 0;
    }
    i++;
  }
  i=0;
  while(cin[i]!='\0'){
    if(cin[i]=='.'){
      printf("FLOAT !!!!");
      return 0;
    }
    i++;
  }
  printf("INTEGER !!!");
}
