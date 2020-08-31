//
// Created by eric on 31/08/2020.
//

#ifndef GESTIONCLUBSPORTIF_MEMBRE_H
#define GESTIONCLUBSPORTIF_MEMBRE_H

#include <string>
#include <vector>
#include "Sport.h"

using namespace std;
class Membre {

private:
    string nom,prenom;
    vector<Sport> sportsPatriques;
public:
    Membre(const string &nom, const string &prenom);

    const string &getNom() const;

    void setNom(const string &nom);

    const string &getPrenom() const;

    void setPrenom(const string &prenom);

    bool pratique(int sport);

    void ajouterSport(Sport &sport);

    void enleverSport(Sport &sport);

    const vector<Sport> &sportsPratiques() const;


};


#endif //GESTIONCLUBSPORTIF_MEMBRE_H
