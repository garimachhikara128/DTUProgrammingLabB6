#include<stdio.h>
#include<limits.h>

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

    // max
    int max = INT_MIN ;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] > max)
            max = arr[i] ;
      
    }

    printf("Max of array is %d", max) ;

    return 0 ; 
}