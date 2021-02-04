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

    int rot ;

    printf("Enter no. of rotations ?") ;
    scanf("%d", &rot) ;
    
    for(int i = 1 ; i <= rot ; i++)
    {
        // single rotation logic ...
        int temp = arr[n-1] ;

        for(int i = n-1 ; i >= 1 ; i--)
        {
            arr[i] = arr[i-1] ;
        }

        arr[0] = temp ;
    }
 
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\t", arr[i]) ;
    } 

  

    return 0 ; 
}