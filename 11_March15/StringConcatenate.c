#include<stdio.h>

int main()
{

    char fs[20] ;

    printf("Enter the first string ? ") ;
    gets(fs) ;

    char ss[20] ;
    printf("Enter the second string ? ") ;
    gets(ss) ;

    int len = 0 ;
    while(fs[len] != '\0')
        len++ ;

    int i = len ; // fs track
    int j = 0  ; // ss track

    while(ss[j] != '\0')
    {
        fs[i] = ss[j] ;

        i++ ;
        j++ ;
    }

    fs[i] = '\0' ;

    printf("First string is %s\n", fs) ;
    printf("Second string is %s\n", ss) ;

    return 0 ;
}