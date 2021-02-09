#include<stdio.h>

void PD() ;

int main()
{
    printf("hello\n") ;
    PD(5) ;
    printf("bye\n") ;

    return 0  ;
}

// bigger problem
void PD(int n)
{
    // base case
    if(n == 0)
        return ;

    // work
    printf("%d\n", n) ;

    // smaller problem
    PD(n-1) ;
}