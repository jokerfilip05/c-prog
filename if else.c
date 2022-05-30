#include<stdio.h>

int main()
{
    int number;
    printf("Prosim zadejte cislo:\n");
    scanf("%d",&number);
    if(number < 100)
        printf("Cislo je mensi nez 100!\n");
    else if(number == 100)
        printf("Cislo je 100!\n");
    else
        printf("Cislo je vetsi nez 100!\n");

    return 0;
}
