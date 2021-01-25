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

    // search
    int item ;

    printf("Enter the element to be searched ?") ;
    scanf("%d", &item) ;

    // binary search
    int idx = -1 ;

    int lo = 0 ;
    int hi = n-1 ;

    while(lo <= hi)
    {
        int mid = (lo + hi)/2 ;

        if(item > arr[mid]) // right
            lo = mid + 1 ;
        else if(item < arr[mid]) // left
            hi = mid - 1 ;
        else
        {
            idx = mid ;
            break ;
        }

    }

    if(idx == -1)
        printf("%d is not present in the array.", item) ;
    else
        printf("%d is present at %d index.", item, idx) ;


    return 0 ; 
}