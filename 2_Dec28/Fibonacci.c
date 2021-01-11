#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    int a = 0 ;
    int b = 1 ;

    int count = 0 ; // initialization
    while(count <= n) // condition
    {
        printf("%d\t", a) ;

        int sum = a + b ;

        // update
        a = b ;
        b = sum ;

        count = count + 1; // re-initialization
    }

  
    return 0 ;
}