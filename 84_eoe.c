#include<stdio.h>
int main(){
  int lst[10],finishlst[10],id=0;
  for(int i=0;i<10;i++){
    scanf("%d", &lst[i]);
  }

  for(int j=1;j<=8;j++){
    if(lst[j-1]%2==0 && lst[j+1]%2==0){
      finishlst[id]=lst[j];
      id++;
    }
  }

  for(int i=0;i<id;i++){
    if(i==id-1)printf("%d", finishlst[i]);
    else{printf("%d ", finishlst[i]);}
  }
}
