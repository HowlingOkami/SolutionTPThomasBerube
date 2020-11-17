#include "Menus2033960.h"

int afficherMenu1(int menu)
{
    cout << " Veuillez entrer le type de solide" << endl;
    cout << "1 : rectangle" << endl;
    cout << "2 : triangle" << endl;
    cout << "3 : caree" << endl;
    cout << "4 : losange" << endl;
    cout << "5 : Quitter " << endl;
    cin >> choixForme;
    return menu;
}

int afficherMenu2(int menu)
{
    cout << "Voulez-vous que le solide soit plein ou vide?" << endl;
    cout << "1 = vide" << endl << " 2 = plein " << endl;
    cin >> choixRemplissage;
    return menu;
}

int validerMenu()
{
    while (choixForme < 1 || choixForme > 5 )
    {
        cout << "erreur, veuillez entrer une valeur valide." << endl;
        cout << " Veuillez entrer le type de solide" << endl;
        cout << "1 : rectangle" << endl;
        cout << "2 : triangle" << endl;
        cout << "3 : caree" << endl;
        cout << "4 : losange" << endl;
        cout << "5 : Quitter " << endl;
        cin >> choixForme;
        if (choixForme == 5)
        {
            return 0;
        }
    }
    while (choixRemplissage < 1 || choixRemplissage > 2)
    {
        cout << "erreur, veuillez entrer une valeur valide." << endl;
        cout << "Voulez-vous que le solide soit plein ou vide?" << endl;
        cout << "1 = vide" << endl << " 2 = plein " << endl;
        cin >> choixRemplissage;
    }
    return 0;
}


