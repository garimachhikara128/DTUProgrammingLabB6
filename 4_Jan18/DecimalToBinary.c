#include<stdio.h>

int main()
{
    int decimal ;

    printf("Enter decimal no ?") ;
    scanf("%d", &decimal) ;

    int ans = 0 ;
    int mult = 1 ; // 10 ^ 0

    while(decimal != 0)
    {
        int rem = decimal % 2 ;
        ans = ans + rem * mult ;

        mult = mult * 10 ;
        decimal = decimal / 2 ;
    }

    printf("Binary Representation is %d", ans) ;
    
    return 0 ;
}