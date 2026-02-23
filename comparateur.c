#include "comparateur.h"
#include <stdio.h>

void saisieDeDonnees(int nb1, int nb2, char fich[])
{
    printf("Entrez nb rangee : ");
    scanf("%d", &nb1);
    printf("\nEntrez nb table par rangee");
    scanf("%d", &nb2);
    printf("Entrez le chemin du fichier texte (il doit être au même niveau que l'exe): ");
    scanf("%s", &fich);
}

void lectureListe(char chemin[25])
{
    char line[256];
    char nom[128], prenom[128];
    while (fgets(line, sizeof(line), f))
    {
        // Attejd "prenom nom" (séparés par espaces ou tab)
        if (sscanf(line, " %127s %127s", prenom, nom) == 2)
        {
        }
    }
}