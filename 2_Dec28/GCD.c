#include<stdio.h>

int main()
{
    int n1 , n2, ans ;

    printf("Enter 2 numbers ?") ;
    scanf("%d %d" , &n1 , &n2) ;

    int min = n1 > n2 ? n2 : n1 ;

    int count = 1 ;
    while(count <= min)
    {

        if(n1 % count == 0 && n2 % count == 0)
        {
            ans = count ;
        }

        count = count + 1 ;
      
    }

    printf("HCF of %d and %d is %d" , n1, n2 , ans) ;
    
    return 0;
}