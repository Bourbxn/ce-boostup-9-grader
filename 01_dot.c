#include<stdio.h>
int main(){
  int a, b, c, d, e, f,dotproduct;
  scanf("%d %d %d",&a,&b,&c);
  scanf("%d %d %d",&d,&e,&f);
  dotproduct = (a*d)+(b*e)+(c*f);
  printf("%d", dotproduct);
  return 0;
}
