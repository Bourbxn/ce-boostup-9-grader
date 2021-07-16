#include<stdio.h>
int main(){
  int mass,week,dayleft;
  double prc,losswght,day;
  scanf("%d", &mass);
  if(mass<=0){
    printf("ERROR");
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
