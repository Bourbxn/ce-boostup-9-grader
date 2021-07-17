#include<stdio.h>
int main(){
  double cm,kg,bmi,cmuse;
  scanf("%lf", &kg);
  scanf("%lf", &cm);
  cmuse=(cm/100)*(cm/100);
  bmi=kg/cmuse;
  printf("%.6lf\n", bmi);
  if(bmi>=30){printf("Obesity");}
  else if(bmi>=25){printf("Overweight");}
  else if(bmi>=18.5){printf("Normal");}
  else{printf("Underweight");}
  return 0;
}
