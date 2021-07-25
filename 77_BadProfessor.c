#include<stdio.h>
int main(){
  int num,min=101,max=-1;
  int lst[10];
  for(int i=0;i<10;i++){
    scanf("%d", &num);
    if(num>100 || num<0){
      printf("There is something WRONG.");
      return 0;
    }
    lst[i]=num;
  }

  for(int j=0;j<10;j++){
    if(lst[j]>max)max=lst[j];
  }
  for(int j=0;j<10;j++){
    if(lst[j]<min)min=lst[j];
  }
  printf("%d %d", min,max);
}
