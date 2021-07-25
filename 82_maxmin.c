#include<stdio.h>
int main(){
  int num,lst[10000],max,min;
  scanf("%d", &num);
  for(int i=0;i<num;i++){
    scanf("%d", &lst[i]);
  }

  for(int i=0;i<num;i++){
    if(i==0)max=lst[i];
    else{
      if(lst[i]>max)max=lst[i];
    }
  }

  for(int i=0;i<num;i++){
    if(i==0)min=lst[i];
    else{
      if(lst[i]<min)min=lst[i];
    }
  }
  printf("%d", max-min);
}
