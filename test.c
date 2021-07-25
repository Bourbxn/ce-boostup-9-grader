#include <stdio.h>
int main()
{
    char input[1000];
    scanf("%s", &input);
    for(int i=0;i<10;i++){
      printf("%c", input[i]);
    }
}
