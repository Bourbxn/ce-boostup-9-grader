#include<stdio.h>
int main(){
  char input[10000];
  int i=0,point=0;
  scanf("%[^\n]", input);
  while(input[i]!=0){
    if(input[i]=='2')point+=2;
    else if(input[i]=='4')point+=4;
    else if(input[i]=='8')point+=8;
    i++;
  }
  switch (point) {
    case 2:printf("GET OUT!!!");break;
    case 8:printf("YOU CAN PASS PYRAMID!!!");break;
    case 6:printf("GET OUT!!!");break;
    case 10:printf("YOU CAN PASS PYRAMID!!!");break;
    case 12:printf("PHAROAH NEVER DIE");break;
    case 14:printf("PHAROAH NEVER DIE");break;
    default :printf("Error");
  }
}
