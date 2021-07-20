#include<stdio.h>
int main(){
  int i=0,num,sumodd=0,sumeven=0;
  while(i==0){
    scanf("%d", &num);
    if(num==0)break;
    else{
      if(num%2==0)sumeven+=num;
      else{sumodd+=num;}
    }
  }
  printf("%d\n%d", sumodd,sumeven);
}
