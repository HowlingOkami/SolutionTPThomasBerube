#pragma once
//But
//Auteur
//Date
#include <iostream>
#include <string>
using namespace std;


int traiterForme();  //Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent la phrase de pr�sentation de la forme avec les bonnes dimensions et finalement appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette fonction : traiterRectangle(), traiterCarre(), traiterTriangle(), traiterLosange().
int dessinerRectangleVide();  //Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et le mode de remplissage sont pass�s en param�tre.
int dessinerRectanglePlein();  //Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et le mode de remplissage sont pass�s en param�tre.
int dessinerCareeVide();
int dessinerCareePlein();
int	dessinerTriangle1plein();  //Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
int	dessinerTriangle2plein();  //Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
int	dessinerTriangle3plein();  //Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
int	dessinerTriangle4plein();  //Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode de remplissage sont pass�s en param�tre.
int dessinerTriangle5plein();  // dessiner une piramide
int dessinerTriangle6plein(); // pour une piramide inverser
int dessinerTriangle7plein(); // dessine un tiangle isocesle inverser
int	dessinerLosangeplein();  //Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont pass�s en param�tre.
int	genererNombreAleatoire();  //Fonction qui retourne un nombre al�atoire compris entre min et max pass�s en param�tre.
int traiterRectangle();// pour traite le rectangle
int traiterCaree();//pour traite le caree
int traiterTriangle();//pour traite les triangles
int traiterLosange();
int traiterNombreAleatoire();