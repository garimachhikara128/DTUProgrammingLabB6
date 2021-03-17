#include<stdio.h>
#include<string.h>

int main()
{

    char str[20] = "hello" ;
    char str1[10] = "bye" ;

    // printf("String Length : %d\n", strlen(str)) ;
    // printf("String Rev : %s\n", strrev(str)) ;
    // printf("String Compare : %d\n", strcmp(str, str1)) ;
    printf("String concatenation : %s\n", strcat(str, str1)) ;

    return 0 ;
}