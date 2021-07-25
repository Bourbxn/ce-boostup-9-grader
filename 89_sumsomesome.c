#include<stdio.h>
int main(){
  int start,end,sum=0;
  scanf("%d %d", &start, &end);
  for(int i=start;i<=end;i++){
    sum+=i*i;
  }
  printf("%d", sum);
}
