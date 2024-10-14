void generateurObjet()
{
    srand(time(NULL));
    char objet1;
    char objet2;
    char objet3;
    char objet_final
    int choix_objet = rand() % 3;
    printf("Entrez le premier personnage ");
    scanf("%c", &objet1);
    getchar();
    printf("\nEntrez le deuxieme personnage ");
    scanf("%c", &objet2);
    getchar();
    printf("\nEntrez le troisieme personnage ");
    scanf("%c", &objet3);
    getchar();
    switch (choix_objet)
    {
    case 0:
        printf("Le perso principale est : %c ", objet1);
        objet_final=objet1
        sleep(4);
        break;
    case 1:
        printf("Le perso principale est : %c ", objet2);
        objet_final=objet2
        sleep(4);
        break;
    case 2:
        printf("Le perso principale est : %c ", objet3);
        objet_final=objet3
        sleep(4);
        break;
    default:
        break;
    }
}
