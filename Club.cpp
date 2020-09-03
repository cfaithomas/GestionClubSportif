//
// Created by eric on 31/08/2020.
//

#include <iostream>
#include "Club.h"

Club::Club(const string &nom) : nom(nom) {
    nombremembres=0;}

Membre* Club::trouverMembre(const string &nom,const string &prenom) {
    for(int i=0;i<nombremembres;i++)
    {
        if(membres[i].getNom()==nom&&membres[i].getPrenom()==prenom)
        {
            return &membres[i];
        }
    }
    return NULL;
}

int Club::ajouterMembre(const string &nom,const string &prenom) {
        const Membre membre=Membre(nom,prenom);
        membres.push_back(membre);
        nombremembres++;
    return membres.size()-1;

}

void Club::lister() {
    cout<<nom<<endl;
for(int i=0;i<nombremembres;i++)
{
    cout<<"*********************Membre*************************"<<endl;
    cout<<membres[i].getPrenom()<<" "<<membres[i].getNom()<<endl;
    cout<<"******************Sports Pratiqués******************"<<endl;
    for(int j=0;j<membres[i].sportsPratiques().size();j++)
    {
        cout<<membres[i].sportsPratiques()[j].getNom()<<endl;
    }
}
}

 vector<Membre> &Club::getMembres()  {
    return membres;
}
