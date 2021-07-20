#include<stdio.h>
int main()
{ double x,y;
long sum;
scanf("%lf %lf",&x,&y);
if( x>0 && x-(int)x && y-(int)y){

sum = x * (y*y);
printf("%ld",sum);
}
else{
printf("ERROR");
}

return 0;
}
