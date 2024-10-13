#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateur_lieux()
{
    srand(time(NULL));
    char lieu1;
    char lieu2;
    char lieu3;

    printf(" Saisissez votre premier lieu \n");
    scanf("%c", lieu1);
    printf(" Saisissez votre deuxieme lieu \n");
    scanf("%c", lieu2);
    printf(" Saissisez votre troisième lieu \n");
    scanf("%c", lieu3);


    char *lieux[] = {lieu1, lieu2, lieu3};

    int aleatoire = rand()%3;

    printf(" Lieu choisi : %s \n", lieux[aleatoire]);

    

}