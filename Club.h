//
// Created by eric on 31/08/2020.
//

#ifndef GESTIONCLUBSPORTIF_CLUB_H
#define GESTIONCLUBSPORTIF_CLUB_H

#include <string>
#include "Membre.h"

using namespace std;
class Club {

    private:
    string nom;
    vector<Membre> membres;
    int nombremembres;
public:
    Club(const string &nom);
    public:
    Membre* trouverMembre(const string &nom,const string &prenom);
    int  ajouterMembre(const string &nom,const string &prenom); //renvoi l'index du membre ajouté
    void lister();

    vector<Membre> &getMembres();

};


#endif //GESTIONCLUBSPORTIF_CLUB_H
