#include<stdio.h>

int main()
{

    char fs[20] ;

    printf("Enter the first string ? ") ;
    gets(fs) ;

    char ss[20] ;
    printf("Enter the second string ? ") ;
    gets(ss) ;

    int i = 0 ;

    while(fs[i] == ss[i])
    {
        if(fs[i] == '\0' && ss[i] == '\0')
            break ;

        i++ ;
    }

    if(fs[i] == '\0' && ss[i] == '\0')
        printf("Identical\n") ;
    else
        printf("Not Identical\n") ;

    return 0 ;
}