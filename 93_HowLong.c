#include<stdio.h>
int main(){
  long int num,lst[10000],rslt[10000],max;
  scanf("%ld", &num);
  for(int i=0;i<num;i++){
    scanf("%ld", &lst[i]);
  }

  for(int j=0;j<num-1;j++){
    if(lst[j]>=lst[j+1]){
      rslt[j]=lst[j]-lst[j+1];
    }
    else if(lst[j]<lst[j+1]){
      rslt[j]=lst[j+1]-lst[j];
    }
  }

  for(int k=0;k<num-1;k++){
    if(k==0)max=rslt[k];
    else{
      if(rslt[k]>max)max=rslt[k];
    }
  }
  printf("%ld", max);

}
