# include <stdio.h>

int fact (int n) ;

int main ()
{
    int n, num, sum = 0, r ; 

    printf ("Enter a number - ") ;
    scanf ("%d", &n) ;

    num = n ;

    while (n>0)
    {
        r = n%10 ;
        sum = sum + fact(r) ;
        n = n/10 ;
    }

    if (sum==num)
    {
        printf ("%d is a Strong Number", num) ;
    }

    else 
    {
        printf ("%d is not a strong number", num) ;
    }

    return 0 ;
}

int fact (int n)
{
    int fact = 1 ; 

    for ( int i = 1 ; i <= n ; i++)
    {
        fact = fact * i ;
    }

    return fact ;
}