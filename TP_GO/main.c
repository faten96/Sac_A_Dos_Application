#include <stdio.h>
#include <stdlib.h>

//décalaration des structures

const int NbrObjet=5; /* nbr d'objets */
const int PoidMax=10; /* poid maximal que peut supporter le sac à dos */
int Valeurs[5]; /* table des valeurs des objets */
int Poids[5];  /* table des poids des objets */
int Gain[5][5]; /* table de calcul de gain */

//initialiser les cases par les valeurs là ou il y a des "0"
void initialiser_Gain_Table(int taille){

    int i=0;
    int j=0;

    /* initialiser la première ligne et colonne par des "0" */
    for(i=0;i<taille;i++) Gain[i][0]=0;
    for(j=0;j<taille;j++) Gain[0][j]=0;

}

int main()
{
    initialiser_Gain_Table(5);
    printf("%d",Gain[0][0]);
    return 0;
}
