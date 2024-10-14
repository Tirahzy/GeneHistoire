#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_CHOICES 3

// Fonction pour obtenir une entrée utilisateur
void obtenir_choix(char choix[][MAX_CHOICES], int nb_choix) {
    for (int i = 0; i < nb_choix; i++) {
        printf("Entrez le choix %d : ", i + 1);
        fgets(choix[i], MAX_CHOICES, stdin);
        choix[i][strcspn(choix[i], "\n")] = 0; // Supprimer le '\n' à la fin
    }
}

// Fonction pour choisir un personnage aléatoirement
char* choisir_personnage(char personnages[][MAX_CHOICES]) {
    int indice = rand() % MAX_CHOICES;
    return personnages[indice];
}

// Fonction pour choisir un lieu aléatoirement
char* choisir_lieu(char lieux[][MAX_CHOICES]) {
    int indice = rand() % MAX_CHOICES;
    return lieux[indice];
}

// Fonction pour choisir une action aléatoirement
char* choisir_action(char actions[][MAX_CHOICES]) {
    int indice = rand() % MAX_CHOICES;
    return actions[indice];
}

// Fonction pour choisir un objet aléatoirement
char* choisir_objet(char objets[][MAX_CHOICES]) {
    int indice = rand() % MAX_CHOICES;
    return objets[indice];
}

// Fonction pour afficher le résultat
void afficher_resultat(char *personnage, char *lieu, char *action, char *objet) {
    printf("Le personnage %s effectue l'action %s au lieu %s avec l'objet %s.\n", personnage, action, lieu, objet);
}

int main() {
    char personnages[MAX_CHOICES][MAX_CHOICES];
    char actions[MAX_CHOICES][MAX_CHOICES];
    char lieux[MAX_CHOICES][MAX_CHOICES];
    char objets[MAX_CHOICES][MAX_CHOICES];

    srand(time(NULL)); // Initialisation de la graine aléatoire

    // Obtenir les choix de l'utilisateur
    obtenir_choix(personnages, MAX_CHOICES);
    obtenir_choix(actions, MAX_CHOICES);
    obtenir_choix(lieux, MAX_CHOICES);
    obtenir_choix(objets, MAX_CHOICES);
    afficher_resultat(
        choisir_personnage(personnages),
        choisir_lieu(lieux),
        choisir_action(actions),
        choisir_objet(objets)
    );
    return 0;
}