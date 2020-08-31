//
// Created by eric on 31/08/2020.
//

#include "Sport.h"

Sport::Sport(const string &nom, const string &description) : nom(nom), description(description) {}

Sport::Sport(const string &nom) : nom(nom) {}

const string &Sport::getNom() const {
    return nom;
}
