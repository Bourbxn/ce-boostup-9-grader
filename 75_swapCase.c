#include<stdio.h>
int main(){
  char cin[10000],cout[10000];
  scanf("%[^\n]", &cin);
  int i=0;
  while(cin[++i]!='\0');
  for(int j=0;j<i;j++){
    if((cin[j]>=65 && cin[j]<=90)||(cin[j]>=97 && cin[j]<=122)){
      if(cin[j]>=65 && cin[j]<=90)printf("%c", cin[j]+32);
      else{printf("%c", cin[j]-32);}
    }
    else{printf("%c", cin[j]);}
  }
}
