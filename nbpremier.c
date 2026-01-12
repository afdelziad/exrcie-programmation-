#include<stdio.h>
#include<math.h>

void main ()
{
    int N , temp , p , exp , nbfacteur ;

    printf("entrer la valeur de N :\n");
    scanf("%d",&N);

    temp = 0 ;
    p = 2 ;
    nbfacteur = 0 ;

    while ( temp > 1)
    {
        exp = 0 ;
        while ( temp % p == 0 )  
        {
            temp = temp / p ;
            exp++ ;
        }
        if ( exp > 0 )
        {
            printf("%d^%d ",p,exp);
            nbfacteur++ ;
        }
        p++ ;
    }
    printf("\n");
    if (nbfacteur == 1 && exp == 1)
    {
        printf("%d est un nombre premier \n",N);
    }
    else
    {
        printf("%d n'est pas un nombre premier \n",N);
    }
}