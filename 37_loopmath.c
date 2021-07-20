#include<stdio.h>
int main(){
    int num,i;
    scanf("%d", &num);
    if(num>1000000){
      printf("Error");
    }
    else{
      for(i=1;i<=12;i++){
        printf("%d x %d = %d\n", num,i,num*i);
      }
    }

}
