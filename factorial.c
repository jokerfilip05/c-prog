#include <stdio.h>

int factorial(int n){
    if(n<2){
        return 1;
    }else{
        return factorial(n-1) * n;
    }
}
int main() {
    for(int n = 0; n<20; n++){
    printf(
        "FACTORIAL(%2d) = %10d\n", n, factorial(n));
    }
    return 0;
}
