#include<stdio.h>
int main(){
  int i,num,startnum;
  scanf("%d", &num);
  startnum = num-2;
  if(num>99 || num<0){
    printf("ERROR");
  }
  else{
    for(i=0;i<5;i++){
      printf("%d + %d = %d\n", startnum,startnum,startnum+startnum);
      startnum++;
  }

  }
}
