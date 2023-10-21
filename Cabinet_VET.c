#include "Cabinet_Vet.h"

// Menu principal
int Menu_Principal()
{
    int choix;

    do
    {
        printf("\n");
        printf("********** MENU PRINCIPAL : ***********\n");
        printf("Gestion de rendez-vous................%d\n",gestion_rdv);
        printf("Gestion du personnel..................%d\n", gestion_personnel);
        printf("Gestion client........................%d\n", gestion_client);
        printf("Quitter...............................%d\n",Quitter);
        printf("Entrez votre choix : ");
        scanf("%d",&choix);
    }
    while(choix!= gestion_rdv && choix != gestion_personnel
            && choix != gestion_client && choix != Quitter);

    return choix;
}

int Menu_rdv()
{
    int choix;

    do
    {
        printf("\n");
        printf("********* Gestion de rendez-vous ******* : \n");
        printf("Prendre un rendez-vous.......................%d\n",prise_rdv);
        printf("Rediger un rapport et cloturer un dossier....%d\n", rapport_rdv);
        printf("Annuler un rendez-vous.......................%d\n", annulation_rdv);
        printf("Sauvegarder les donnees de la semaine........%d\n", sauvegarde);
        printf("Retour au menu principal.....................%d\n", Retour);
        printf("Choisir une option : ");
        scanf("%d",&choix);

    }
    while(choix != prise_rdv && choix != rapport_rdv
            && choix != annulation_rdv && choix != sauvegarde
            && choix != Retour);

    return(choix);
}

int Menu_Personnel()
{
    int choix;

    do
    {
        printf("********** Gestion du personnel ********\n");
        printf("Planning du personnel.................%d\n",planning);
        printf("Ajouter un collaborateur..............%d\n",Ajout);
        printf("Bloquer un collaborateur..............%d\n",Bloquer);
        printf("Retour................................%d\n",Retour);
        printf("Entrez un choix :");
        scanf("%d", &choix);
    }
    while(choix != planning && choix != Ajout
            && choix != Bloquer && choix != Retour );

    return(choix);
}

int Menu_Client()
{
    int choix;

    do
    {
        printf("\n");
        printf("******* Gestion des clients ********\n");
        printf("Rechercher un animal..............%d\n",recherche_A);
        printf("Consulter les infos d'un animal...%d\n",infos_animal);
        printf("Recheche a partir d'un client.....%d\n",recherche_C);
        printf("Retour............................%d\n", Retour);
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
    }
    while(choix != recherche_A && choix != recherche_C
            && choix != infos_animal && choix != Retour );

    return(choix);
}
