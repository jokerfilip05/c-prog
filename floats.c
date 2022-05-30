#include <stdio.h>

int main()
{

    float x = 0.3;
    
    if (x == 1 - 0.7)
    {
        printf("Je to stejne.\n");
    }
    else
    {
        printf("Neni to stejne.\n");
    }
    
    if (x - (1 - 0.7) <= 0.000001)
    {
        printf("Je to stejne.\n");
    }
    else
    {
        printf("Neni to stejne.\n");
    }

    printf("%s", (x - (1 - 0.7) <= 0.000001) ? "Je to stejne.\n" : "Neni to stejne.\n");

    return 0;
}
