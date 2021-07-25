#include<stdio.h>
int main(){
  char id[100],name[100],cat[100];
  int i=0,j=0,k=0;
  scanf("%s", &id);
  scanf("%s",&name);
  scanf("%s", &cat);
  while(id[++i]!='\0');
  while(name[++j]!='\0');
  while(cat[++k]!='\0');
  printf("++++++++++++++++++++++++++++++++++++++++\n");
  printf("+                                      +\n");
  printf("+             id: %s",id);
  for(int l=0;l<14-i;l++)printf(" ");
  printf("       +\n");
  printf("+           NAME: %s", name);
  for(int l=0;l<14-j;l++)printf(" ");
  printf("       +\n");
  printf("+       category: %s", cat);
  for(int l=0;l<14-k;l++)printf(" ");
  printf("       +\n");
  printf("+                                      +\n");
  printf("++++++++++++++++++++++++++++++++++++++++");
}
