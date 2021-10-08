#include <stdio.h>
#include <time.h>

#include <stdlib.h>

int main() {
    int nblance = 0, score = 0, de1 = 0, de2 = 0, de3 = 0, saisie = 0, cptrelance = 0;
    char saisierelance;

    printf("Saisir votre nombre de lancés");
    scanf("%d", &nblance);
    score = nblance * 10;
    /*****************************lancés***************************/

    srand(time(NULL));

    while (score > 0 && nblance > 0) //attention operateur logique inversé
   {
        printf("*************NOUVEAU LANCER*****************\n");

        //TO DO lancement des 3 dés

            de1 = rand() % 6 + 1;

            de2 = rand() % 6 + 1;

            de3 = rand() % 6 + 1;

        printf("\n%d %d %d", de1, de2, de3);


        //TO DO test 421
        if ((de1 + de2 + de3 == 7) && (de1 == 4 || de2 == 4 || de3 == 4)) {
            printf("\nGagné");
        } else {
            printf("\nPerdu\n");
            /*****************************question relance du joueur*************************/
            printf("Souhaitez-vous relancer? O/N");
            scanf(" %c",&saisierelance);
            if(saisierelance=='O')
            {
                printf("**************RELANCE**************************\n");
                printf("\nQuels sont les dés que vous voulez relancer\n");
                printf("1-Les 3 dés\n");
                printf("2- de1 et de2\n");
                printf("3- de2 et de3\n");
                printf("4- de1 et de3\n");
                printf("5-uniquement de1\n");
                printf("6- uniquement de2\n");
                printf("7- uniquement de3\n");
                scanf("%d",&saisie);
                switch (saisie) {

                    case 1:
                        // TO DO
                        break;
                    case 2:
                        // TO DO
                        break;
                    case 3:
                        // TO DO
                        break;
                    case 4:
                        // TO DO
                        break;
                    case 5:
                        // TO DO
                        break;
                    case 6:
                        // TO DO
                        break;
                    case 7:
                        // TO DO
                        break;

                }


            }
            //TO DO Gestion des scores

            //TO DO Gestion de la fin de partie
        }

    }
    return 0;
}
