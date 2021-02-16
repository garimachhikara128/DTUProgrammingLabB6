#include<stdio.h>

int fact(int) ;

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int ans = fact(n) ;
    printf("%d", ans) ;

    return 0  ;
}

// bp : n !
int fact(int n)
{
    // base case
    if(n == 1)
        return 1 ;

    // sp
    int fnm1 = fact(n-1) ;

    // work
    int fn = n * fnm1 ; 

    return fn ;

    // return n * fact(n-1) ;
}