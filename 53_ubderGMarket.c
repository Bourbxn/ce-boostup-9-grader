#include<stdio.h>
int main(){
  char input[1000];
  int i=0;
  scanf("%s", &input);
  while(input[i]!='\0'){
    if(input[i]<48 || input[i]>57 || input[i]=='.'){
      printf("FALSE");
      return 0;
    }
    else{
      i++;
    }
  }
  printf("TRUE");
}
