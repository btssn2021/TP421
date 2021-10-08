#include <stdio.h>
#include <time.h>

#include <stdlib.h>

int main() {
    int nblance=0,score=0,de1=0,de2=0,de3=0;
    srand(time(NULL));
    printf("Saisir votre nombre de lancés");
    scanf("%d",&nblance);
    score=nblance*10;
    /*****************************lancés***************************/
    while(score>0&&nblance>0) //attention operateur logique inversé
    {
        //TO DO lancement des 3 dés
        de1=rand()%6+1;
        de2=rand()%6+1;
        de3=rand()%6+1;
        printf("\n%d %d %d",de1,de2,de3);
        nblance--;

        //TO DO test 421
        if((de1+de2+de3==7)&&(de1==4||de2==4||de3==4))
        {
            printf("\nGagné");
        }

        //TO DO relance des dés

        //TO DO Gestion des scores

        //TO DO Gestion de la fin de partie
    }
    return 0;
}
