#include <stdio.h>
#include <time.h>

#include <stdlib.h>

int main() {
    int nblance = 0, score = 0, de1 = 0, de2 = 0, de3 = 0, saisie = 0, cpt_relance = 0;
    char saisierelance;

    printf("Saisir votre nombre de lancés");
    scanf("%d", &nblance);
    score = nblance * 10;
    /*****************************lancés***************************/

    srand(time(NULL));
    lancer:
    while (score > 0 && nblance > 0) //attention operateur logique inversé
   {
        printf("*************NOUVEAU LANCER*****************\n");
       relance:
        /****************************lancement des 3 dés**************************************/
            if(de1==0)
            de1 = rand() % 6 + 1;
            if(de2==0)
            de2 = rand() % 6 + 1;
            if(de3==0)
            de3 = rand() % 6 + 1;

        printf("\n%d %d %d", de1, de2, de3);


        /***************************test du 421************************************************/
        if ((de1 + de2 + de3 == 7) && (de1 == 4 || de2 == 4 || de3 == 4)) {
            printf("\nGagné");
        } else {
            printf("\nPerdu\n");
            /*****************************question relance du joueur*************************/
            if (cpt_relance < 2) {
                printf("Souhaitez-vous relancer? O/N");
                scanf(" %c", &saisierelance);
                /******************************relance*******************************************/
                if (saisierelance == 'O') {
                    printf("**************RELANCE**************************\n");
                    printf("\nQuels sont les dés que vous voulez relancer\n");
                    printf("1- Les 3 dés\n");
                    printf("2- de1 et de2\n");
                    printf("3- de2 et de3\n");
                    printf("4- de1 et de3\n");
                    printf("5- uniquement de1\n");
                    printf("6- uniquement de2\n");
                    printf("7- uniquement de3\n");
                    scanf("%d", &saisie);
                    switch (saisie) {

                        case 1:
                            de1 = 0;
                            de2 = 0;
                            de3 = 0;
                            break;
                        case 2:
                            de1 = 0;
                            de2 = 0;
                            break;
                        case 3:
                            de2 = 0;
                            de3 = 0;
                            break;
                        case 4:
                            de1 = 0;
                            de3 = 0;
                            break;
                        case 5:
                            de1 = 0;
                            break;
                        case 6:
                            de2 = 0;
                            break;
                        case 7:
                            de3 = 0;
                            break;

                    }
                    cpt_relance++;
                    goto relance;

                }


                //TO DO Gestion des scores

                //TO DO Gestion de la fin de partie
            }
            /*******************traitement du compteur_relance >=2********************/
            de1=0;
            de2=0;
            de3=0;
            cpt_relance=0;
            nblance--;
            goto lancer;
        }
    }
    return 0;
}
