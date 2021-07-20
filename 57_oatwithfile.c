#include<stdio.h>
int main(){
  int numcin,allfile,point=0;
  int arr[10000];
  scanf("%d", &numcin);
  for(int i=0;i<numcin;i++){
    scanf("%d", &allfile);
    if(allfile%2!=0){
      arr[i]=allfile;
      point++;
    }
  }
  printf("%d", point);
}
