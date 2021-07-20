#include<stdio.h>
int main(){
  char input[100];
  int intin,a=0,check=0;
  scanf("%s", &input);
  sscanf(input,"%d",&intin);
  while(input[++a]!='\0');
  //printf("%d %d", intin,a);
  for(int i=0;i<a;i++){
    if(input[i]=='1'){check++;}
    else if(input[i]=='2'){
      if(intin%2==0)check++;
    }
    else if(input[i]=='3'){
      if(intin%3==0)check++;
    }
    else if(input[i]=='4'){
      if(intin%4==0)check++;
    }
    else if(input[i]=='5'){
      if(intin%5==0)check++;
    }
    else if(input[i]=='6'){
      if(intin%6==0)check++;
    }
    else if(input[i]=='7'){
      if(intin%7==0)check++;
    }
    else if(input[i]=='8'){
      if(intin%8==0)check++;
    }
    else if(input[i]=='9'){
      if(intin%9==0)check++;
    }
  }
  if(check==a)printf("true");
  else{printf("false");}
}
