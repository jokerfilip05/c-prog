#include<stdio.h>

int main(){
   float radius, area;

   printf("\nZadejte polomer kruhu : ");
   scanf("%f", &radius);

   area = 3.14 * radius * radius;
   printf("\nOblast kruhu : %f", area);

   return (0);
}
