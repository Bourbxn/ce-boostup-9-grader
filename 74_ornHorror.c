#include<stdio.h>
int main(){
  char word[10000];
  int num;
  scanf("%s", &word);
  do{
      scanf("%d", &num);
  }while(num<1000000 && num>=0);
}
