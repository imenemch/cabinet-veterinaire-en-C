#include "Cabinet_Vet.h"

int main()
{
    int choix;

    do
    {
        choix = Menu_Principal();
        switch(choix)
        {
        case(gestion_rdv):
            do
            {
                choix = Menu_rdv();
                switch(choix)
                {
                case(prise_rdv):
                    break;
                case(rapport_rdv):
                    break;
                case(annulation_rdv):
                    break;
                case(sauvegarde):
                    break;
                case(Retour):
                    printf("Retour au menu principal \n");
                    break;
                default:
                    break;
                }
                break;

            }
            while(choix != Retour);
            break;

        case(gestion_personnel):
            do
            {
                choix= Menu_Personnel();
                switch(choix)
                {
                case(planning):
                    break;
                case(Ajout):
                    break;
                case(Bloquer):
                    break;
                case(Retour):
                    printf("Retour au menu principal \n");
                    break;
                default:
                    break;
                }
            }
            while(choix != Retour);
            break;

        case(gestion_client):
            do
            {
                choix = Menu_Client();
                switch(choix)
                {
                case(recherche_A):
                    break;
                case(infos_animal):
                    break;
                case(recherche_C):
                    break;
                case(Retour):
                    printf("Retour au menu principal : \n");
                    break;
                }
            }
            while(choix != Retour);
            break;

        case(Quitter):
            printf("Au revoir !! \n");
            break;
        default:
            break;
        }
    }
    while(choix!=Quitter);

    return 0;
}
