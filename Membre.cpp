//
// Created by eric on 31/08/2020.
//

#include "Membre.h"

Membre::Membre(const string &nom, const string &prenom) : nom(nom), prenom(prenom) {}

const string &Membre::getNom() const {
    return nom;
}

void Membre::setNom(const string &nom) {
    Membre::nom = nom;
}

const string &Membre::getPrenom() const {
    return prenom;
}

void Membre::setPrenom(const string &prenom) {
    Membre::prenom = prenom;
}

bool Membre::pratique(int sport) {
    return sport>=0&&sport<sportsPatriques.size();
}

void Membre::ajouterSport(Sport &sport) {
    sportsPatriques.push_back(sport);

}

void Membre::enleverSport(Sport &sport) {
    for(int i=0;i<sportsPatriques.size();i++)
    {
        if(sportsPatriques[i].getNom()==sport.getNom()) //recherche sur le nom
        {
            sportsPatriques.erase(sportsPatriques.begin()+i); //deplacement de l"iterateur à la position puis effacement
        }
    }
}

const vector<Sport> &Membre::sportsPratiques() const {
    return sportsPatriques;
}
