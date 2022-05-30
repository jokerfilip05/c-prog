#include<stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("\n\nZadejte teplotu ve stupnich Celsia: ");
    scanf("%f", &celsius);
    
    fahrenheit = (1.8*celsius) + 32;
    
    printf("\n\n\nTeplota ve stupnich Fahrenheit je: %f ", fahrenheit);
    return 0;
}
