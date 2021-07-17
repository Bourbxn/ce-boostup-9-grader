#include<stdio.h>
int main(){
  int month,khum;
  char khanh;
  scanf("%d %d %c", &month, &khum, &khanh);
  if(khum == 15 && (khanh =='W' || khanh=='w')){
    printf("Wan Pra Yai");
  }
  else{
    printf("Normal Day");
  }
}
