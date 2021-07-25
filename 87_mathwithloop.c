#include<stdio.h>
int main(){
  int num,before,lst[10000],ind=0;
  int sum=0,max,min;
  for(int i=0;i>=0;i++){
    scanf("%d", &lst[i]);
    ind++;
    if(i!=0){
      if(lst[i]<lst[i-1])break;
    }
  }
  for(int i=0;i<ind;i++){
    sum+=lst[i];
  }

  for(int i=0;i<ind;i++){
    if(i==0)max=lst[i];
    else{
      if(lst[i]>max)max=lst[i];
    }
  }

  for(int i=0;i<ind;i++){
    if(i==0)min=lst[i];
    else{
      if(lst[i]<min)min=lst[i];
    }
  }

  double avg=(double)sum/(double)ind;
  printf("%d %d %d %.2lf", sum,min,max,avg);
}
