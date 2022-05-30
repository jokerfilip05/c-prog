#include<stdio.h>
 
int main()
{
  int number, Square;
 
  printf(" \n Zadejte jakekoliv kladne cislo : ");
  scanf("%d", &number);
  
  Square = number * number;
  
  printf("\n Druha mocnina %d je  =  %d", number, Square);
 
  return 0;
}
