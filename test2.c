#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a = n , b = n ;
	for(int i=1;i<=2*(n-1)+1;i++){
		for(int j=1;j<=2*(n-1)+1;j++){
			if(j==a||j==b){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		if(i<n){
			a--; b++;
		}
		else{
			a++; b--;
		}

		printf("\n");
	}
	return 0;
}
