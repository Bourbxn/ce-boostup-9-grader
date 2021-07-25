#include<stdio.h>
int main(){
  int lstone[10],lsttwo[10],lst[10],id=0;
  for(int i=0;i<10;i++){
    scanf("%d", &lstone[i]);
  }
  for(int i=0;i<10;i++){
    scanf("%d", &lsttwo[i]);
  }
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(lstone[i]==lsttwo[j]){
        lst[id]=lstone[i];
        id++;
      }
    }
  }

  for(int i=0;i<id;i++){
    if(i!=id-1)printf("%d\n", lst[i]);
    else{printf("%d", lst[i]);}
  }
}
