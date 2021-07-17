#include<stdio.h>
int main(){
  int num,sn;
  scanf("%d", &num);
  if(num<0){
    printf("Error");
  }
  else{
    sn=(num/2)*(1+num);
    printf("%d", sn);
  }

}
