#include<stdio.h>

int main() {
    
    // déclaration des variables
    int a;   // nombre 1
    int b;   // nombre 2
    int PGCD = 0; // PGCD (initialisé à 0)
    int i;   // pour la boucle
    int PPCM; // PPCM (initialisé à 0)

    printf("Entrer le nombre a: ");
    scanf("%d", &a);
    printf("Entrer le nombre b: ");
    scanf("%d", &b);

    // Calcul du PGCD
    for (i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            PGCD = i; // Met à jour le PGCD
        }
    }

    printf("PGCD de %d et %d = %d\n", a, b, PGCD);

    // Calcul du PPCM
    PPCM = (a > b) ? a : b; // PPCM commence avec le plus grand des deux
    while (1) {
        if (PPCM % a == 0 && PPCM % b == 0) {
            printf("PPCM de %d et %d = %d\n", a, b, PPCM);
            break; // Sort de la boucle une fois trouvé
        }
        ++PPCM; // Incrémentation de PPCM
    }

    return 0;

  //Enjoy C language. 
}
