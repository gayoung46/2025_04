#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int a;
  
  printf("input the second : ");
  scanf("%i", &a);
  
  printf("the time is %i : %i \n", a/60, a%60);
   
  
  system("PAUSE");	
  return 0;
}
