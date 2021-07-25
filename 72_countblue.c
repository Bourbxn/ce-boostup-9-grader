#include<stdio.h>
int main(){
  int lst[100000]={0,0,0,0,0,0,0,0,0,0};
  int num;
  do{
    scanf("%d", &num);
    if(num>=0 & num<=9){
      lst[num]++;
    }
  }while(num>=0 && num<=9);
  for(int i=0;i<10;i++){
    printf("%d = %d", i,lst[i]);
    if(i!=9)printf("\n");
  }
}
