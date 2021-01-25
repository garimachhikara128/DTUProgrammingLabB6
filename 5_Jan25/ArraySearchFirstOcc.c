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

    int idx = -1;

    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] == item)
        {
            idx = i ;
            break ;
        }
    }
   
    if(idx == -1)
        printf("%d is not present in the array.", item) ;
    else
        printf("First occ of %d is at %d index.", item, idx) ;

    return 0 ; 
}