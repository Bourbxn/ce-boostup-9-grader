#include<stdio.h>
int main(){
  char cin[10000];
  int big=0,small=0,i=0;
  scanf("%[^\n]", &cin);
  while(cin[++i]!='\0');
  for(int j=0;j<i;j++){
    if(cin[j]>=65 && cin[j]<=90){
      big++;
    }
    else if(cin[j]>=97 && cin[j]<=122){
      small++;
    }
  }
  printf("Capital letter = %d\n", big);
  printf("Lower-case letter = %d", small);
}
