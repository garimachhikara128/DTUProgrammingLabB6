#include<stdio.h>

int main()
{

    char str[20] ;

    printf("Enter the string ? ") ;
    gets(str) ;

    int diff = 'a' - 'A' ; // 32

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        char ch = str[i] ;

        if(ch >= 'A' && ch <= 'Z')
        {
            // do nothing
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            str[i] = ch - diff ;
        }
        else
        {
            // do nothing
        }
    } 

    printf("Upper case string is %s", str) ; 

    return 0 ;
}