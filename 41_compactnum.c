#include<stdio.h>
int main(){
  int a,bi,c,di,real,compact;
  scanf("%d %d", &a, &bi);
  scanf("%d %d", &c, &di);
  real = (a*c)+(bi*di*-1);
  compact = (a*di)+(c*bi);
  printf("(%d)+(%d)i",real,compact);
}
