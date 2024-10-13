#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateur_lieux()
{
    srand(time(NULL));
    char lieu1[40];
    char lieu2[40];
    char lieu3[40];

    printf(" Saisissez votre premier lieu \n");
    scanf("%s", lieu1);
    printf(" Saisissez votre deuxieme lieu \n");
    scanf("%s", lieu2);
    printf(" Saissisez votre troisième lieu \n");
    scanf("%s", lieu3);


    char *lieux[] = {lieu1, lieu2, lieu3};

    int aleatoire = rand()%3;

    printf(" Lieu choisi : %s \n", lieux[aleatoire]);
   
}

int main()
{
    generateur_lieux();
    return 0;
}