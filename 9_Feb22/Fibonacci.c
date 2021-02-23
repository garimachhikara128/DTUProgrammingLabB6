#include<stdio.h>

int fib(int) ;

int main()
{

    printf("%d\n", fib(4)) ;

    return  0 ;
}

// BP : nth fib no ?
int fib(int n)
{
    // Base Case
    if(n == 0 || n == 1)
        return n ;

    // SP
    int fnm1 = fib(n-1) ;
    int fnm2 = fib(n-2) ;

    // Work
    int fn = fnm1 + fnm2 ; 

    return fn ;
}