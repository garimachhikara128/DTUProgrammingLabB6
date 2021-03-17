#include<stdio.h>

int main()
{

    int r1 = 2 , c1 = 3 , r2 = 3 , c2 = 4 ;

    int one[][3] = {{1,2,3,}, {4,5,6}}  ;
    int two[][4] = {{7,8,9,10} ,{11,12,13,14} ,{15,16,17,18}} ;

    int res[r1][c2] ;

    for(int i = 0  ; i < r1 ; i++)
    {
        for(int j = 0 ; j < c2 ; j++)
        {
            int sum = 0 ;
            for(int k = 0 ; k < c1 ; k++)
            {
                sum += one[i][k] * two[k][j] ;
            }

            res[i][j] = sum ;
        }
    }

    for(int i = 0  ; i < r1 ; i++)
    {
        for(int j = 0 ; j < c2 ; j++)
        {
            printf("%d\t", res[i][j]) ;
        }

        printf("\n") ;
    }













    return 0 ;
}