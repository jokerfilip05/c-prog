#include<stdio.h>
int main()
{
   int num;
 
   printf("Zadejte libovolne cislo: ");
   scanf("%d",&num);

   if ( num%2 == 0 )
      printf("%d je sude cislo", num);
   else
      printf("%d je liche cislo", num);
 
   return 0;
}
