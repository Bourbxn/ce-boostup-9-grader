#include<stdio.h>
int main(){
  long int num,i=0,lst[10000],aso=0,dso=0;
  while(num!=0){
    scanf("%ld", &num);
    if(num!=0){
      lst[i]=num;
      i++;
    }
  }
  for(int j=0;j<i-1;j++){
    if(lst[j]>lst[j+1])dso++;
    else if(lst[j]<lst[j+1])aso++;
  }
  if(aso==i-1)printf("Ascending Sort Order");
  else if(dso==i-1)printf("Descending Sort Order");
  else{printf("Unsorted Order");}
  return 0;
}
