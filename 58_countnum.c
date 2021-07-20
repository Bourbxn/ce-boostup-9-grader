#include<stdio.h>
int main(){
  long int start,end,d;
  scanf("%ld %ld %ld", &start, &end, &d);
  if(start>=end || d<=0 ){
    printf("Go to hell");
    return 0;
  }

  while(start<end){
    printf("%ld\n", start);
    start+=d;
  }
  printf("%ld", end);
}
