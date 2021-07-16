#include <stdio.h>
#include <math.h>
int main()
{
  int h,d,m,ym,z,day,month,year;
  scanf("%d %d %d",&day,&month,&year);
  if(day > 31 || month > ){
    printf("ERROR");
  }
  else{
    if(month == 1)
    {
      month = 13;
      year--;
    }
    if (month == 2)
    {
      month = 14;
      year--;
    }
    d = day;
    m = month;
    ym = year % 100;
    z = year / 100;
    h = d + 13*(m+1)/5 + ym + ym/4 + z/4 + 5*z;
    h = h % 7;
    if(h==0){printf("Saturday");}
    else if(h==1){printf("Sunday");}
    else if(h==1){printf("Monday");}
    else if(h==1){printf("Tuesday");}
    else if(h==1){printf("Wednesday");}
    else if(h==1){printf("Thursday");}
    else if(h==1){printf("Friday");}
    return 0;
  }

}
