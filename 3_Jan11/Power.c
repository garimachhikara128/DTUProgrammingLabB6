#include<stdio.h>

int main()
{
    int base = 2, exponent = 5;

    printf("Enter Base ?") ;
    scanf("%d", &base) ;

    printf("Enter Exponent ?") ;
    scanf("%d", &exponent) ;

    int ans = 1;

    for(int i = 1 ; i <= exponent ; i++)
    {
        ans = ans * base ;
    }

    printf("%d ^ %d = %d" , base , exponent, ans) ;

    return 0 ;
}