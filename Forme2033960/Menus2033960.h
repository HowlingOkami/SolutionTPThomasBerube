#pragma once
#include <iostream>	
using namespace std;
int choixForme;
int choixRemplissage;
//But:
//Auteur:
//Date:

//Liste des declarations des fonctions geant l'affichage des menus
int afficherMenu1(int menu); //Fonction qui affiche le menu 1
int afficherMenu2(int menu); //Fonction qui affiche le menu 2
int validerMenu(); //Fonction qui lit le choix de l’utilisateur et vérifie que le choix est bien parmi les choix offerts dans le menu, informations passées en paramètre.Cette fonction retourne le choix validé.L’utilisateur peut taper n’importe quoi au clavier, le programme ne part pas en boucle infinie.