//
// Created by eric on 31/08/2020.
//

#ifndef GESTIONCLUBSPORTIF_SPORT_H
#define GESTIONCLUBSPORTIF_SPORT_H

#include <string>

using namespace std;

class Sport {
private:
    string nom,description;
public:
    Sport(const string &nom, const string &description);

    Sport(const string &nom); //surcharge du constructeur

    const string &getNom() const;


};


#endif //GESTIONCLUBSPORTIF_SPORT_H
