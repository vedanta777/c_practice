# include <stdio.h>

int main ()
{
    int ch, i, j, k, row ;

    printf ("Enter a capital alphabet - ") ;
    scanf ("%c", &ch) ;

    row = ((int) ch) - 64 ;

    for (i = 1 ; i <= row ; i++)
    {
        for (j = 1 ; j <= row - i ; j++)
        {
            printf (" ") ;
        }
        
        for (k = 1 ; k <= 2*i - 1 ; k++)
        {
            if (k == 1 || k == 2*i - 1)
            {
                printf ("%c",i+64) ;
            }

            else 
            {
                printf (" ") ;
            }
        }

        printf("\n") ;
    }

    for (i = row - 1 ; i >= 1 ; i--)
    {
        for (j = 1 ; j<= row - i ; j++ )
        {
            printf (" ") ;
        }

        for (k = 1 ; k<= 2*i - 1 ; k++)
        {
            if (k == 1 || k == 2*i - 1)
            {
                printf ("%c",i+64) ;
            }
            
            else
            {
                printf (" ") ;
            }
        }

        printf ("\n") ;
    }

    return 0 ; 
}