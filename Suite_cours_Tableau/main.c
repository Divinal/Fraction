#include <stdio.h>
#include <stdlib.h>
#include <cmath.h>

// EXERCICE QUI PERMET D'AFFICHER LA PLUS GRANDE ET LA PLUS PETITE VALEUR DU TABLEAU

int main()
{
    int i, n; // Declaration des Entiens pour contenir les nombre sans virgule
    float Tab[100], Min, Max; // Declaration des Réels pour contenir les nombre avec virgule

    // LA BOUCLE DO WHILE EST UTILISEE POUR NE PAS COMPLIMENTER LE NOMBRE DE TABLEAU A 0
    do {

        printf("Donne une valeur supperieur a 1 :  ");
        scanf("%d", &n);
    } while (n<=0 && n>100);

    printf("\n Remplissez votre tableau \n");

 // La Boucle For pour permettre à remplir le nombre de case declarée
    for (i=0; i<n; i++){

        printf("\nDonne la %de valeur du tableau :  ", i+1);
        scanf("%f", &Tab[i]);
    }

    Min = Tab[0];
    Max = Tab[0];

    for (i=0; i<n; i++){

        if (Tab[i]>Max)
        {
            Max = Tab[i];

        }
        if (Tab[i]<Min)
        {
            Min = Tab[i];

        }
    }

    printf("\nLa valeur de Max est : %.1f ", Max);
    printf("\nLa valeur de Min est : %.1f \n", Min);

    printf("ce programme permet juste de petite chose");

    return 0;
}
