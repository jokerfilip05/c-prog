#include <stdio.h>
int main() {
   int year;
   printf("Zadej rok: ");
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("%d je prestupny rok.", year);
   }
 
   else if (year % 100 == 0) {
      printf("%d neni prestupny rok.", year);
   }
  
   else if (year % 4 == 0) {
      printf("%d je prestupny rok.", year);
   }

   else {
      printf("%d neni prestupny rok.", year);
   }

   return 0;
}
