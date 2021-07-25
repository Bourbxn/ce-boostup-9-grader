#include<stdio.h>
int main(){
  long int num,lst[100],max,secondmax;
  scanf("%ld", &num);
  for(int i=0;i<num;i++){
    scanf("%ld", &lst[i]);
  }

  for(int i=0;i<num;i++){
    if(i==0)max=lst[i];
    else{
      if(lst[i]>max)max=lst[i];
    }
  }

  for(int i=0;i<num;i++){
    if(i==0)secondmax=lst[i];
    else{
      if(lst[i]>secondmax && lst[i]<max)secondmax=lst[i];
    }
  }
  if(num==1 || max==secondmax)printf("%ld", max);
  else{
      printf("%ld\n%ld", max,secondmax);
  }
}
