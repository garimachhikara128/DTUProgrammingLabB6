#include<stdio.h>

int main()
{
    int one[3][3] = {{1,2,3}, {4,5,6}, {7,8,9} };
    int two[3][3] = {{11,12,13}, {14,15,16}, {17,18,19} };

    int res[3][3] ;

    for(int r = 0 ; r < 3 ; r++)
    {
        for(int c = 0 ; c < 3 ; c++)
        {
            res[r][c] = one[r][c] + two[r][c] ;
        }
    }

    for(int r = 0 ; r < 3 ; r++)
    {
        for(int c = 0 ; c < 3 ; c++)
        {
            printf("%d\t", res[r][c]) ;
        }
        printf("\n") ;
    }

    return  0 ;
}