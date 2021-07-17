#include<stdio.h>
int main(){
  int side,num,area;
  scanf("%d %d", &num, &side);
  area = side*num*side;
  if(side<=0 || num<=0){
    printf("Error");
  }
  else{
    printf("%d", area);
  }
}
