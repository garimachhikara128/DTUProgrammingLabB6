#include<stdio.h>

int main()
{

    char os[20] ;

    printf("Enter the string ? ") ;
    // scanf("%s", os) ;
    gets(os) ;

    char ns[20] ;

    // 1. calculate the length of original string
    int len = 0 ;
    while(os[len]!='\0')
        len++ ;

    // 2. reversal logic
    int i = len-1 ;
    int j = 0 ;

    while(i >= 0)
    {
        ns[j] = os[i] ;

        i-- ;
        j++ ;
    }

    ns[j] = '\0' ;

    printf("%s", ns) ;

    return 0 ;
}