#include<stdio.h>

void pattern(int) ;
void print(int) ;
void printVal(int , int) ;

int main()
{
    int majorTickLength = 3 ;
    int inchRuler = 3 ;

    printVal(majorTickLength, 0) ;

    for(int i = 1 ; i <= inchRuler ; i++)
    {   
        pattern(majorTickLength-1) ;
        printVal(majorTickLength, i) ;
    }


    return 0 ;
}

void pattern(int n)
{
    if(n == 0)
        return ;

    // SP
    pattern(n-1) ;

    // Work
    print(n) ;

    // SP
    pattern(n-1) ;

}

void print(int n)
{
    for(int i = 1 ; i <= n ; i++)
        printf("- ") ;

    printf("\n") ;
}

void printVal(int n, int val)
{
    for(int i = 1 ; i <= n ; i++)
        printf("- ") ;

    printf("%d" , val) ;
    printf("\n") ;

}