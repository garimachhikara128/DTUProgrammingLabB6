#include<stdio.h>

int main()
{

    // int val[] = {10,20,30,40} ;

    // int* arr[4] ;
    // arr[0] = &val[0] ;
    // arr[1] = &val[1] ;
    // arr[2] = &val[2] ;
    // arr[3] = &val[3] ;

    // for(int i =0 ; i < 4 ; i++)
    //     printf("%d\n", *arr[i]) ;

    // char *p1 = "hii" ;
    // char *p2 = "bye" ;
    // char *p3 = "code" ;
    // char *p4 = "dtu" ;

    // char* arr[4] ;

    // arr[0] = p1 ;
    // arr[1] = p2 ;
    // arr[2] = p3 ;
    // arr[3] = p4 ;

    // char* arr[4] = {p1, p2, p3, p4} ;

    char* arr[4] = {"hii", "bye", "code", "dtu"} ;

    for(int i = 0 ; i < 4 ; i++)
        printf("%s\n", arr[i]) ;

    return 0 ; 
}