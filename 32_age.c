#include<stdio.h>
int main(){
  int num,i,j;
  int arr[100];
  scanf("%d", &num);
  for(i=0;i<num;i++){
    scanf("%d", &arr[i]);
  }
  for(j=0;j<num;j++){
    if(arr[j]>2564 || arr[j]<=0){
      if(j==num-1 ){
        printf("NULL");
      }
      else{
        printf("NULL\n");
      }
    }
    else{
      if(j==num-1){
        printf("%d", 2564-arr[j]);
      }
      else{
        printf("%d\n", 2564-arr[j]);
      }
    }

  }

}
