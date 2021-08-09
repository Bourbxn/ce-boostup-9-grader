#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			if(i==1||i==num||j==1||j==num){
				printf("*");
			}
			else if(i==j||i+j==num+1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
    if(i!=num)printf("\n");
	}
	return 0;
}
