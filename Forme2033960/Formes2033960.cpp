#include "Formes2033960.h"
#include <time.h>


int dessinerRectangleVide()
{ //donne un rectangle vide
	int longueur; // pour la longueur
	int largeur; //pour la largeur
	cout << "entrer la longueur" << endl; //demander les dimesions
	cin >> longueur;
	cout << "entrer la largeur" << endl;
	cin >> largeur;
	for (int j = 1; j <= longueur; j++)//pour la ligne du haut
	{
		cout << "*";
	}//fin du for

	cout << endl;

	for (int i = 1; i <= largeur - 2; i++)//pour la largeur de gauche
	{
		cout << "*";
		for (int j = 1; j + 2 <= longueur; j++)//pour largeur de droit
		{
			cout << " ";
		}//fin du for

		cout << "*" << endl;
	}//fin du for

	for (int y = 1; y <= longueur; y++)//pour la longueur du bas
	{
		cout << "*";
	}//fin du for
}//fin du int

int dessinerRectanglePlein()
{
	//donne un rectangle plein
	int longueur; // pour la longueur
	int largeur; //pour la largeur
	cout << "entrer la longueur" << endl; //demander les dimesions
	cin >> longueur;
	cout << "entrer la largeur" << endl;
	cin >> largeur;
	for (int j = 1; j <= longueur; j++)//pour la ligne du haut
	{
		cout << "*";
	}//fin du for

	cout << endl;

	for (int i = 1; i <= largeur - 2; i++)//pour la largeur de gauche
	{
		cout << "*";
		for (int j = 1; j + 2 <= longueur; j++)//pour largeur de droit
		{
			cout << "#";
		}//fin du for

		cout << "*" << endl;
	}

	for (int y = 1; y <= longueur; y++)//pour la longueur du bas
	{
		cout << "*";
	}//fin du for
}
int dessinerCareeVide()
{
	//donne un rectangle vide
	int largeur; //pour la largeur
	cout << "entrer la largeur" << endl;
	cin >> largeur;
	for (int j = 1; j <= largeur; j++)//pour la ligne du haut
	{
		cout << "*";
	}//fin du for

	cout << endl;

	for (int i = 1; i <= largeur - 2; i++)//pour la largeur de gauche
	{
		cout << "*";
		for (int j = 1; j + 2 <= largeur; j++)//pour largeur de droit
		{
			cout << " ";
		}//fin du for

		cout << "*" << endl;
	}//fin du for

	for (int y = 1; y <= largeur; y++)//pour la longueur du bas
	{
		cout << "*";
	}//fin du for
}
int dessinerCareePlein()
{
	//donne un rectangle vide
	int largeur; //pour la largeur
	cout << "entrer la largeur" << endl;
	cin >> largeur;
	for (int j = 1; j <= largeur; j++)//pour la ligne du haut
	{
		cout << "*";
	}//fin du for

	cout << endl;

	for (int i = 1; i <= largeur - 2; i++)//pour la largeur de gauche
	{
		cout << "*";
		for (int j = 1; j + 2 <= largeur; j++)//pour largeur de droit
		{
			cout << "#";
		}//fin du for

		cout << "*" << endl;
	}//fin du for

	for (int y = 1; y <= largeur; y++)//pour la longueur du bas
	{
		cout << "*";
	}//fin du for
}//fin du int

int dessinerTriangle1plein()
{
	int longueur;

	cout << "Entrer la longueur: "; //l'utulisateur donne la longueur
	cin >> longueur;

	for (int i = 1; i <= longueur; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "* ";
		}//fin du for
		cout << "\n";
	}//fin du for
	return 0;
}//fin du int

int dessinerTriangle2plein()
{
	int longueur;

	cout << "Entrer la longueur: ";//demander la longueur a l'utulisateur.
	cin >> longueur;

	for (int i = longueur; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "* ";
		}//fin du for
		cout << endl;
	}//fin du for

	return 0;
}//fin du int

int dessinerTriangle3plein()
{
	int longueur;

	cout << "Entrer la longueur: ";//demander la longueur a l'utulisatuer
	cin >> longueur;

	for (int i = longueur; i >= 1; --i)
	{
		for (int espace = 0; espace < longueur - i; ++espace)
			cout << "  ";

		for (int j = i; j <= 1 * i; ++j)
			cout << "* ";

		for (int j = 0; j < i - 1; ++j)
			cout << "* ";

		cout << endl;
	}//fin du for

	return 0;
}//fin du int

int dessinerTriangle4plein()
{
	int longueur;

	cout << "Entrer la longueur: "; //l'utulisateur donne la longueur
	cin >> longueur;



	for (int i = 1; i <= longueur; ++i)
	{
		for (int espace = 0; espace < longueur - i; ++espace)//pour que le coin  soit enbas a droite
			cout << "  ";
		for (int j = 1; j <= i; ++j)
		{
			cout << "* ";
		}//fin du for
		cout << "\n";
	}//fin du for

	return 0;
}//fin du int

int dessinerTriangle5plein()
{
	int longueur;

	cout << "Entrer la longueur: ";//demander la dimension
	cin >> longueur;

	for (int i = 1, k = 0; i <= longueur; ++i, k = 0)
	{
		for (int espace = 1; espace <= longueur - i; ++espace)
		{
			cout << "  ";
		}//fin du for

		while (k != 2 * i - 1)
		{
			cout << "* ";
			++k;
		}//fin du while
		cout << endl;
	}//fin du for
	return 0;
}//fin du int

int dessinerTriangle6plein()
{
	int longueur;

	cout << "Entrer la longueur: ";//demander la longueur a l'utulisatuer
	cin >> longueur;

	for (int i = longueur; i >= 1; --i)
	{
		for (int espace = 0; espace < longueur - i; ++espace)
			cout << "  ";

		for (int j = i; j <= 2 * i - 1; ++j)
			cout << "* ";

		for (int j = 0; j < i - 1; ++j)
			cout << "* ";

		cout << endl;
	}//fin du for

	return 0;
}//fin du int

int dessinerTriangle7plein()
{
	//triangle isoscele inverser
	int longueur;

	cout << "Entrer la longueur: "; //l'utulisateur donne la longueur
	cin >> longueur;


	for (int i = longueur; i >= 1; --i)
	{
		for (int espace = 0; espace < longueur - i; ++espace)
			cout << " ";

		for (int j = i; j <= 1 * i; ++j)
			cout << "* ";

		for (int j = 0; j < i - 1; ++j)
			cout << "* ";

		cout << endl;
	}//fin du for

	return 0;
}//fin du int

int dessinerLosangeplein()
{
	//mon ami ma demontrer la fonction abs et je voulais l'essayer
		int longueur;
		cout << " Veuillez indiquer la hauteur" << endl; //demander la longueur a l'utulisateur
		cin >> longueur;
		for (int i = 0; i < longueur; ++i)
		{

			for (int j = 0; j < longueur; ++j)
			{

				std::cout << (abs(j - longueur / 2) + abs(i - longueur / 2) <= longueur / 2 ? "*" : " ");//pour faire des lignes qui diminue en descendant et montant
			}//fin du for


			std::cout << std::endl;


		}//fin du for
	
}//fin du int

int genererNombreAleatoire()
{
	
	srand(time(NULL));
	int v1;
	int min;
	int max;

	cin >> min;
	cin >> max;


	cout << rand() % (max - min);



	return 0;
}

int traiterRectangle()
{
{
	cout << "vous avez choisi un rectangle";
	if (choixRemplissage == 2)
	{
		 dessinerRectanglePlein();
	}
	else if (choixRemplissage == 1)
	{
		dessinerRectangleVide();
	}
}

	return 0;
}

int traiterCaree()
{
	{
		cout << "vous avez choisi un caree";
		if (choixRemplissage == 2)
		{
			dessinerCareePlein();
		}
		else if (choixRemplissage == 1)
		{
			dessinerCareeVide();
		}
	}

	return 0;
}

int traiterTriangle()
{
	int choix;
	cout << "vous avez choisi un triangle, choisiser parmis ces options" << endl;
	cout << "1. Triangle rectangulaire avec coin bas-gauche" << endl;
	cout << "2. Triangle rectangulaire avec coin haut-gauche" << endl;
	cout << "3. Triangle rectangulaire avec coin haut-droit" << endl;
	cout << "4. Triangle rectangulaire avec coin bas-droit" << endl;
	cout << "5. Pyramide" << endl;
	cout << "6. Pyramide inverse" << endl;
	cout << "7. Triangle isoscel inverse" << endl;
	cin >> choix;
		while (choix <1 || choix >7)
		{
			cout << "Prenner un nombre valide." << endl;
			cout << "vous avez choisi un triangle, choisiser parmis ces options" << endl;
			cout << "1. Triangle rectangulaire avec coin bas-gauche" << endl;
			cout << "2. Triangle rectangulaire avec coin haut-gauche" << endl;
			cout << "3. Triangle rectangulaire avec coin haut-droit" << endl;
			cout << "4. Triangle rectangulaire avec coin bas-droit" << endl;
			cout << "5. Pyramide" << endl;
			cout << "6. Pyramide inverse" << endl;
			cout << "7. Triangle isoscel inverse" << endl;
			cin >> choix;
		}
		if (choix == 1)
		{
			dessinerTriangle1plein();
		}
		else if (choix == 2)
		{
			dessinerTriangle2plein();
		}
		else if (choix == 3)
		{
			dessinerTriangle3plein();
		}
		else if (choix == 4)
		{
			dessinerTriangle4plein();
		}
		else if (choix == 5)
		{
			dessinerTriangle5plein();
		}
		else if (choix == 6)
		{
			dessinerTriangle6plein();
		}
		else if (choix == 7)
		{
			dessinerTriangle7plein();
		}
	return 0;
}

int traiterLosange()
{
	dessinerLosangeplein();
	return 0;
}

int traiterNombreAleatoire()
{
	genererNombreAleatoire();
	return 0;
}

