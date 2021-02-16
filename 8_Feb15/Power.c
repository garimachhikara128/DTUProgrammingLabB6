#include<stdio.h>

int power(int, int) ;

int main()
{
    int base, exponent ;

    printf("Enter Base and Exponent?") ;
    scanf("%d %d", &base, &exponent) ;

    printf("%d", power(base, exponent)) ;

    return  0; 

}

// BP : b ^ e
int power(int b , int e)
{
    if(e == 0)
        return 1 ;

    // SP : b ^ e-1
    int bem1 = power(b , e-1) ;

    // Work
    int be = b * bem1 ; 

    return be ;

}