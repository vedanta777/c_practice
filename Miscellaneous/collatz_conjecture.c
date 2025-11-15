# include <stdio.h>

int main ()
{
    int n, step = 0, num ;

    printf ("Enter a number - ") ;
    scanf ("%d", &n) ;

    num = n ;

    printf ("Collatz sequence for %d is listed below\n", n) ;
    printf ("%d\n", n) ;

    while (n!=1)
    {
        if (n%2 == 1)
        {
            n = 3*n + 1 ;
            printf ("%d\n", n) ;
            step = step + 1 ;
        }
        else 
        {
            n = n/2 ;
            printf ("%d\n", n) ;
            step = step + 1 ;
        }
    }

    printf ("Steps to reach 1 from %d is %d", num, step) ;

    return 0 ;
}