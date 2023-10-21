#ifndef CABINET_VET_H_INCLUDED
#define CABINET_VET_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Tableau d'animaux
#define MAX_SIZE_TAB 10
#define MAX_SIZE_OP 100

// Menu général
int Menu_Principal();

#define gestion_rdv 1
#define gestion_personnel 2
#define gestion_client 3
#define Quitter 10

// Menu prise de rendez_vous
int Menu_rdv();
#define prise_rdv 1
#define rapport_rdv 2
#define annulation_rdv 3
#define sauvegarde 4
#define Retour 0

// Gestion du personnel
int Menu_Personnel();
#define planning 1
#define Ajout 2
#define Bloquer 3
#define Retour 0

// Gestion des clients
int Menu_Client();
#define recherche_A 1
#define infos_animal 2
#define recherche_C 3


// Structure qui va enregister les infos des animaux
struct Animal
{
    char espece[50];
    char nom[50];
    int age;
    char sexe;
    char Tab_Operation[MAX_SIZE_OP];

};
typedef struct Animal ANI;


// Structure pour enregistrer les infos des maîtres
struct Maitre
{
    char nom [40];
    char prenom [40];
    ANI tab_animal[MAX_SIZE_TAB];

};
typedef struct Maitre MAI;

struct Rendez_vous
{
    char nom[50];
    char prenom [50];
    char espece[50];
    int age;
    char sexe;

};
// Fonction de prise de rendez-vous
int prendre_rdv();




#endif // CABINET_VET_H_INCLUDED
