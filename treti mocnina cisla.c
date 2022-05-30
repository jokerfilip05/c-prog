#include<stdio.h>
 
int main()
{
  int number, cube;
 
  printf(" \n Zadejte libovolny integer hodnotu : ");
  scanf("%d", &number);
  
  cube = number * number * number;
  
  printf("\n Treti mocnina danneho cisla %d is  =  %d", number, cube);
 
  return 0;
}
