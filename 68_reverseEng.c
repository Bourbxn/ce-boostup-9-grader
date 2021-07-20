#include<stdio.h>
int main(){
  char input[1000];
  int a=0,psmall=0,pbig=0;
  scanf("%s", &input);
  while(input[++a]!='\0');
  for(int i=0;i<a;i++){
    if(input[i]>=97 && input[i]<=122)psmall++;
    else if(input[i]>=65 && input[i]<=90)pbig++;
  }
  if(psmall>0 && pbig>0){
    printf("Mix");
  }
  else if(psmall>0 && pbig==0){
    printf("All Small Letter");
  }
  else if(psmall==0 && pbig>0){
    printf("All Capital Letter");
  }
}
