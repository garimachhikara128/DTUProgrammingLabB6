#include<stdio.h>

int main()
{
    int rows = 4 ;
    int cols = 5 ;

    int arr[][5] = 
                {   
                    {10,20,30,40,50} , 
                    {60,70,80,90,100} , 
                    {110,120,130,140,150} , 
                    {160,170,180,190,200} 
                }  ;


    // Wave Display
    for(int c = 0 ; c < cols ; c++)
    {
        if(c % 2 == 0)
        {
            for(int r = 0 ; r < rows ; r ++)
                printf("%d ", arr[r][c]) ;
        }
        else
        {
            for(int r = rows-1 ; r >= 0 ; r --)
                printf("%d ", arr[r][c]) ;
        }
        
    }

    return 0 ;
}