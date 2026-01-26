#include "comparateur.h"
#include <stdio.h>

void saisieDeDonnees()
{
    printf("Entrez nb rangee : ");
    scanf("%d", &nb1);
    printf("\nEntrez nb table par rangee");
    scanf("%d", &nb2);
    printf("Entrez le chemin du fichier texte (il doit être au même niveau que l'exe): ");
    scanf("%s", &fich);
}
