#include<stdio.h>
int main(){
  char cin[10000];
  int i=0,idx=0;
  scanf("%[^\n]", &cin);
  while(cin[++i]!='\0');
  for(int j=0;j<(int)i/10;j++){
    for(int k=0;k<10;k++){
      printf("%c", cin[idx]);
      idx++;
    }
    if(j==((int)i/10)-1 && i%10==0)printf("");
    else{printf("\n");}
  }
  int left=i-idx;
  for(int k=0;k<left;k++){
    printf("%c", cin[idx]);
    idx++;
  }
}
