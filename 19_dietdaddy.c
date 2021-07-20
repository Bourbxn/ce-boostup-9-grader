#include<stdio.h>
int main(){
  char input[100];
  int mass,week,dayleft,i=0;
  double prc,losswght,day;
  scanf("%s",input);
  while(input[i]!='\0'){
  if(input[i]<48||input[i]>57){
    printf("ERROR");
    return 0;
      }
    i++;
  }
  sscanf(input, "%ld", &mass);
  if(mass<=0){
    printf("ERROR");
    return 0;
  }
  else{
    losswght = 0.1*mass;
    day = losswght/0.2;
    week = day/7;
    dayleft = day-(week*7);
    if(mass%2==0){
      printf("Takes about %d weeks %d days", week,dayleft);
    }
    else{
      if(dayleft==6){
        printf("Takes about %d weeks %d days", week+1,0);
      }
      else{
        printf("Takes about %d weeks %d days", week,dayleft+1);
      }
    }
  }
  return 0;
}
