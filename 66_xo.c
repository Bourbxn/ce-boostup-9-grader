#include<stdio.h>
int main(){
  int h,l,a=1;
  scanf("%d %d", &h,&l);
  if(h<=0 || l<=0){
    printf("ERROR");
    return 0;
  }

  if(l%2!=0){
    for(int i=0;i<h;i++){
      for(int j=0;j<l;j++){
        if(a%2!=0){
          printf("x");
          a++;
        }
        else{
          printf("o");
          a++;
        }
      }
      if(i!=h-1)printf("\n");
    }
  }
  else{
    for(int i=0;i<h;i++){
      if(i%2==0){
        for(int j=0;j<l;j++){
          if(j%2!=0)printf("o");
          else{printf("x");}
        }
        if(i!=h-1)printf("\n");
      }
      else{
        for(int j=0;j<l;j++){
          if(j%2!=0)printf("x");
          else{printf("o");}
        }
        if(i!=h-1)printf("\n");
      }
    }
  }
}
