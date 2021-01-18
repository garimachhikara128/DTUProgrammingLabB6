#include<stdio.h>

int main()
{
    int n ;

    printf("No. of elements in array ?") ;
    scanf("%d", &n) ;

    int arr[n] ;

    // input
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("arr[%d] : ", i) ;
        scanf("%d", &arr[i]) ;
    }

    // sum
    int sum = 0 ;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        sum += arr[i] ;
    }

    printf("Sum is %d", sum) ;

    return 0 ; 
}