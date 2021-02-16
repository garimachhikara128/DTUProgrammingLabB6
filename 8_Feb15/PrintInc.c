#include<stdio.h>

void PI() ;

int main()
{
    PI(4) ;

    return 0  ;
}

// bigger problem
void PI(int n)
{
    // base case
    if(n == 0)
        return ;

    // smaller problem
    PI(n-1) ;

    // work
    printf("%d\n", n) ;

}