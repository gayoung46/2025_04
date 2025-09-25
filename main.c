#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int time;
  
  printf("input the second : ");
  scanf("%i", &time);
  
  printf("The time for %i second is %i : %i : %i\n", time, time/3600, (time%3600)/60,(time%3600)%60);
  
  system("PAUSE");	
  return 0;
}
