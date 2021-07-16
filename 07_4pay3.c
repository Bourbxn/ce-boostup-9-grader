#include<stdio.h>
int main(){
  int num,promoset,totalprice,dcprice,nopro;
  scanf("%d", &num);
  totalprice = num*249;
  promoset = num/4;
  nopro = num - (4*promoset);
  dcprice = totalprice - (promoset*249);
  printf("%d", dcprice);
}
