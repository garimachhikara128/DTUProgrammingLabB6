#include<stdio.h>

int main()
{
    int rows = 4 ;
    int cols = 4 ;

    int arr[][4] = 
                {   
                    {10,20,30,40} , 
                    {60,70,80,90} , 
                    {110,120,130,140} , 
                    {160,170,180,190} 
                }  ;

    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            if(c < r)
                printf("0\t") ;
            else
                printf("%d\t" , arr[r][c]) ;
        }

        printf("\n") ;
        
    }

    return 0 ;
}