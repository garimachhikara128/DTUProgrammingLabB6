#include<stdio.h>

int main()
{
    int binary ;

    printf("Enter binary no ?") ;
    scanf("%d", &binary) ;

    int ans = 0 ;
    int mult = 1 ; // 2 ^ 0

    while(binary != 0)
    {
        int rem = binary % 10 ;
        ans = ans + rem * mult ;

        mult = mult * 2 ;
        binary = binary / 10 ;
    }

    printf("Decimal Representation is %d", ans) ;
    
    return 0 ;
}