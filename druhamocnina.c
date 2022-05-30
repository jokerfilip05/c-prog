#include<stdio.h>

float square ( float x );                               
 
int main( )               
{
    float m, n ;
    printf ( "\nZadejte nejake cislo pro nalezeni druhe mocniny\n");
    scanf ( "%f", &m ) ;
    n = square ( m ) ;                      
    printf ( "\nDruha mocnina daneho cisla %f is %f",m,n );
}
 
float square ( float x )   
{
    float p ;
    p = x * x ;
    return ( p ) ;
}
