#include<stdio.h>
int main(){
  int a1,a2,a3,b1,b2,b3,i,j,k;
  scanf("%d %d %d" , &a1, &a2, &a3);
  scanf("%d %d %d", &b1, &b2, &b3);
  i = (a2*b3)-(b2*a3);
  j = (a3*b1)-(b3*a1);
  k = (a1*b2)-(b1*a2);
  printf("(%d)i+(%d)j+(%d)k", i,j,k);
}
