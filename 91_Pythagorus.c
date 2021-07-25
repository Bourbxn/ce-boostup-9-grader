#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
  if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
    printf("\"Wow! Pythagorean theorem\"");
  }
  else if(a<=0 || b<=0 || c<=0){
    printf("\"Oh nooo!\"");
  }
  else{
    printf("\"Oh nooo!\"");
  }
}
