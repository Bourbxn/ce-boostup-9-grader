#include<stdio.h>
int main(){
  char input[100];
  long int num,i=0;
  scanf("%s", &input);
  sscanf(input,"%ld",&num);
  if(num<0){
    if(num%2==0){
      printf("even");
      return 0;
    }
    else{
      printf("odd");
      return 0;
    }
  }
  while(input[i]!='\0'){
    if(input[i]<48 || input[i]>57){
      printf("Error");
      return 0;
    }
    i++;
  }

  while(input[i]!='\0'){
    if(input[i]=='.'){
      printf("Error");
      return 0;
    }
    i++;
  }
  if(num%2==0)printf("even");
  else{printf("odd");}

}
