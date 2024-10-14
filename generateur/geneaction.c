#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateur_action()
{
    srand(time(NULL));
    char action1[40];
    char action2[40];
    char action3[40];

    printf(" Saisissez votre premier action \n");
    scanf("%s", action1);
    printf(" Saisissez votre deuxieme action \n");
    scanf("%s", action2);
    printf(" Saissisez votre troisième action \n");
    scanf("%s", action3);


    char *lieux[] = {lieu1, lieu2, lieu3};

    int aleatoire = rand()%3;

    printf(" Lieu choisi : %s \n", lieux[aleatoire]);
   
}

int main()
{
    generateur_lieux();
    return 0;
}