#include <iostream>
#include "Membre.h"

int main() {
    /********************création des sports********************************/
    Sport sport1("Judo");
    Sport sport2("Karate");
    /******************création d'un membre*********************************/
    Membre membre1("Eric","Thomas");
    /*****************ajout des sports**************************************/
    membre1.ajouterSport(sport1);
    membre1.ajouterSport(sport2);
    /***************Afficage des sports de menbre1*************************/
    for(int i=0;i<membre1.sportsPratiques().size();i++)
    {
        cout<<membre1.sportsPratiques()[i].getNom()<<endl;
    }
    /**************Efface le sport1******************************************/
    membre1.enleverSport(sport1);
    /**********Affichage des sports du membre1******************************/
    for(int i=0;i<membre1.sportsPratiques().size();i++)
    {
        cout<<membre1.sportsPratiques()[i].getNom()<<endl;
        membre1.sportsPratiques();
    }
    /******************test de la méthode pratique avec l'indice -1*********/
    cout<<membre1.pratique(-1);
    return 0;
}
