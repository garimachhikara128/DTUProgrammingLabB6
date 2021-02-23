#include<stdio.h>

int main()
{
    int rows = 3 ;
    int cols = 2 ;

    int arr[rows][cols] ;

    // Input
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("arr[%d][%d] ?", r, c) ;
            scanf("%d", &arr[r][c]) ;
        }
    }

    // Display
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("%d  ", arr[r][c]) ;
        }

        printf("\n") ;
    }

    return 0 ;
}