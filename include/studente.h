//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_STUDENTE_H
#define ESAME_TPA_STUDENTE_H


#include "iscritto.h"

class Studente : public Iscritto {
public:
    Studente() : Iscritto() {}

    Studente(Iscritto iscritto);

    Studente(const Studente & other);

    ~Studente() = default;
};
#endif //ESAME_TPA_STUDENTE_H
