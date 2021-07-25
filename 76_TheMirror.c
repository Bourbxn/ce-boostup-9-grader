#include<stdio.h>
int main(){
  char in[6];
  int total=0;
  scanf("%s", &in);
  for(int i=5;i>=0;i--)printf("%c", in[i]);
  printf(":");
  if(in[0]%2==0)printf("Even");
  else{printf("Odd");}
  for(int j=0;j<6;j++){
    int num = in[j]-'0';
    total+=num;
  }
  printf(":");
  printf("%d", total);
}
