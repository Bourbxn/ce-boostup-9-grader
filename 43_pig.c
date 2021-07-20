#include<stdio.h>
int main(){
  long int a,b,c;
  scanf("%ld %ld %ld", &a, &b, &c);
  if(a==0 && b==0){
    printf("%d", c);
  }
  else if(b==0 && c==0){
    printf("%d", a);
  }
  else if(a==0 & c==0){
    printf("%d", b);
  }
  else{
    if((a>b && a<c) || (a==b && a<c) ||(a<b && a==c) || (a>c && a<b)){
      printf("%ld", a);
    }
    else if((b>a && b<c) || (a>b && b==c) || (b>a && b==c) || (b>c && b<a)){
      printf("%ld", b);
    }
    else if((c>a && c<b) || (c<b && a==b) || (c>b && c==a) || (c>b && c<a)){
      printf("%ld", c);
    }
    else{
      printf("%ld", a);
    }
  }

}
