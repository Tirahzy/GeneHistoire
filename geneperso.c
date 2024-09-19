#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateurPerso()
{
    srand( time( NULL ) );
    char perso1;
    char perso2;
    char perso3;
    int choix_perso = rand() % 3;
    printf("Entrez le premier personnage ");
    scanf("%c", &perso1);
    getchar();
    printf("\nEntrez le deuxieme personnage ");
    scanf("%c", &perso2);
    getchar();
    printf("\nEntrez le troisieme personnage ");
    scanf("%c", &perso3);
    getchar();
    switch (choix_perso)
    {
    case 0:
        printf("Le perso principale est : %c ", perso1);
        break;
    case 1:
        printf("Le perso principale est : %c ", perso2);
        break;
    case 2:
        printf("Le perso principale est : %c ", perso3);
        break;

    default:
        break;
    }
}
int main()
{
    generateurPerso();
}