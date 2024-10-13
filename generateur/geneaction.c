include <stdio.h>

void generer_action() {
    char actions[3][100];
    printf("\nEntrez 3 actions:\n");
    for (int i = 0; i < 3; i++) {
        printf("Action %d: ", i + 1);
        scanf(" %[^\n]s", actions[i]);
    }
    
    srand(time(0)); 
    int index_aleatoire = rand() % 3;
    printf("Action choisie: %s\n", actions[index_aleatoire]);
}
