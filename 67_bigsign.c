#include<stdio.h>
int main(){
  char input[10];
  scanf("%s", &input);
  for(int i=0;i<10;i++){
    if(input[i]=='1'){
      printf("|\n");
      printf("|");
    }
    else if(input[i]=='2'){
      printf("_");
      printf("_|\n");
      printf("|_");
    }
  }
}
