#include<stdio.h>
#include<math.h>
int main()
{
char input[2000];
scanf("%s",input);
long int i=0;
while(input[i]!='\0'){
if(input[i]<48||input[i]>57)
{
printf("ERROR");
return 0;
}
i++;
}
long int kg;
sscanf(input, "%ld", &kg);
if(kg<=0)
{
printf("ERROR");
return 0;
}
else
{
double target=(double)kg*0.1;
long int day=ceil(target/0.2);
long int week=day/7;
day=day%7;
printf("Takes about %ld weeks %ld days",week,day);
return 0;
}
}
