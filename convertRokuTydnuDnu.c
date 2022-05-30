#include <stdio.h>
 
int main()
{
  	int NoOfDays, years, weeks, days;
 
 	printf("\n Zadejte pocet dni  :  ");
  	scanf("%d", &NoOfDays);
  
  	years = NoOfDays / 365;
  	weeks = (NoOfDays % 365) / 7;
  	days = (NoOfDays % 365) % 7;
  	
 
    printf("\n roky  = %d", years);
    printf("\n tydny  = %d", weeks);
    printf("\n dny  = %d", days);
  
   	return 0;
}
