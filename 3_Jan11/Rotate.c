#include<stdio.h>

int main()
{
    int n , rot ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    printf("Enter Rot ?") ;
    scanf("%d", &rot) ;

    // number of digits 
    int nod = 0 ;
    int temp = n ;

    while(temp != 0)
    {
        temp = temp / 10 ;
        nod = nod + 1;
    }

    // 10 ^ nod - 1
    int mult = 1 ;

    for(int i = 1 ; i <= nod-1 ; i++)
    {
        mult = mult * 10 ;
    }

    // rotation logic 
    for(int r = 1 ; r <= rot ; r++)
    {
        int ld = n % 10 ;
        int rest = n / 10 ;

        int ans = ld * mult + rest ;

        n = ans ;
    }

    printf("Rotated no. is %d\n", n) ;

    return 0 ;
}