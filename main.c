#include <stdio.h>
#include "geneperso.h"
#include "genelieux.h"
#include "geneaction.h"
#include "geneobjet.h"

int main() {
    char *personnage = generateurPerso();
    char *lieu = generateur_lieux();
    char *action = generateur_action();
    char *objet = enerateurObjet();

    printf("Histoire générée: %s %s à %s avec un %s.\n", personnage, action, lieu, objet);
p

    return 0;
}