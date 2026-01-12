#include<stdio.h>
#include<math.h>

void main ()
{
    int chiffre , temp , n , nbChiffres = 0 , min = 9 , sommePairs = 0, nbPairs = 0 , inverse = 0 , i ;

    do
    {
    printf("Entrer un nombre entier positif : ");
    scanf("%d",&n);
    } while ( n < 0 );

    temp = n ;

    while (temp > 0) 
    {
        chiffre = temp % 10 ;

        nbChiffres++ ;

        if (chiffre < min)
        {
        min = chiffre ;
        }
        if (chiffre % 2 == 0) 
        {
            sommePairs += chiffre ;
            nbPairs++ ;
        }

        inverse = inverse * 10 + chiffre ;
        temp = temp / 10 ;
    }

    printf("Nombre de chiffres : %d\n",nbChiffres);
    printf("Plus petit chiffre : %d\n",min);

    if ( nbPairs > 0 )
        printf("Moyenne des chiffres pairs : %.2f\n",(float)sommePairs/nbPairs);
    else
        printf("Aucun chiffre pair\n");

    if ( n == inverse )
        printf("Le nombre est un palindrome\n");
    else
        printf("Le nombre n'est pas un palindrome\n");   
}