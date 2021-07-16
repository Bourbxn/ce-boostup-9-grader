#include<stdio.h>
int main(){
  unsigned int m,n,hours;
  scanf("%d %d", &m,&n);
  hours = (m-1)*n;
  if(m==0){printf("0");}
  else{
      printf("%d", hours);
  }

}
