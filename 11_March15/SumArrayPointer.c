#include<stdio.h>

int sum(int *, int) ;

int main()
{
    int n ;

    printf("Enter the no. of elements ?") ;
    scanf("%d", &n) ;

    int arr[n] ;

    for(int i = 0 ; i < n ; i++)
    {
        printf("arr[%d] ?\n", i) ;
        scanf("%d", &arr[i]) ;
    }

    printf("Sum of array is %d\n", sum(arr, n)) ;


    return 0 ;
}

int sum(int *ptr, int n)
{
    int ans = 0 ;

    for(int i =0 ; i < n ; i++)
        ans += ptr[i] ;

    return ans ;

}