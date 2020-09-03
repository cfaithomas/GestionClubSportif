#include <iostream>
#include "Membre.h"
#include "Club.h"

int main() {
    /********************création des sports********************************/
    Sport sport1("Judo");
    Sport sport2("Karate");
    Sport sport3("Kung Fu");
    /******************création d'un membre*********************************/
    Membre membre1("Eric","Thomas");
    Membre membre2("Jean","Daniel");
    /*****************ajout des sports**************************************/
   /* membre1.ajouterSport(sport1);
    membre1.ajouterSport(sport2);
    membre2.ajouterSport(sport2);
    membre2.ajouterSport(sport3);*/
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
    cout<<membre1.pratique(-1)<<endl;

    /*********************création du club**************************************/
    Club club1("Les fumeurs");
    /********************Ajout des membres***************************************/
    int indice=club1.ajouterMembre("Thomas","Eric");
    club1.getMembres()[indice].ajouterSport(sport1);
    club1.getMembres()[indice].ajouterSport(sport2);

    int indice2=club1.ajouterMembre("Jéremy","Xefi");
    club1.getMembres()[indice2].ajouterSport(sport3);
    club1.getMembres()[indice2].ajouterSport(sport2);
    club1.lister();
    cout<<"******************recherche d'un membre********************************"<<endl;
    Membre *membretrouve=club1.trouverMembre("Thomas","Eric");
    cout<<membretrouve->getNom()<<" "<<membretrouve->getPrenom()<<endl;
    for(Sport sport:membretrouve->sportsPratiques()) //utilisation d'une boucle for each interessante car parcours complet du tableau
    {
        cout<<sport.getNom()<<endl; // affichage du nom du sport
    }

    return 0;
}
