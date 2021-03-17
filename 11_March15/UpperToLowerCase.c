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
            str[i] = ch + diff ;
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            // do nothing
        }
        else
        {
            // do nothing
        }
    } 

    printf("Lower case string is %s", str) ; 

    return 0 ;
}