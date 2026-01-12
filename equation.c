#include<stdio.h>
#include<math.h>

void main ()
{
    int d ;
    float Pi , D , Au , R , Pf ;
    char N ;
    
    printf("entrer le nombre de kilomettrage D : \n");
    scanf("%f",&D);
    printf("entrer le type de voiture : \n");
    scanf("%c",&N);
    printf("entrer le nombre de jour de location d : \n");
    scanf("%d",&d);

    if ( D < 0 )
    {
      printf("Erreur \n");
    }
    else if ( D < 100)
    {
      Pi = D * 2 ; 
    }
    else if ( D < 300 )
    {
      Pi = D * 1.8 ;
    }
    else if ( D < 500 )
    {
      Pi = D * 1.2 ;
    }
    else
    {
      Pi = D * 1.2 ;
    }

    switch ( N )
    {
    case 'L':
      Au = Pi * 0.2 ;
    case 'l' : 
      Au = Pi * 0.2 ;
      break;
    case 'S':
      Au = Pi * 0.1 ;
    case 's' : 
      Au = Pi * 0.1 ;
      break; 
    case 'E':
      Au = Pi * 0 ;
    case 'e' : 
      Au = Pi * 0 ;
      break;
    default: printf("Erreur \n");
      break;     
    }
    
    if ( d < 0 )
    {
      printf("Erreur \n");
    }
    else if ( d > 5 )
    {
      R = Pi * 0.1 ;
    }
    else
    {
      R = 0 ;
      printf("aucune reduction \n");
    }
    
    Pf = Pi + Au - R ;

    printf("le prix initial est : %.2f dh \n",Pi);
    printf("augmentation selon le type de la voiture est : %.2f dh \n",Au);
    printf("la reduction selon le nombre de jour de location est : -%.2f dh \n",R);
    printf("le prix finale est : %.2f dh \n",Pf);

}