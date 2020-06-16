//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_DOCENTE_H
#define ESAME_TPA_DOCENTE_H


#include "iscritto.h"

class Docente : public Iscritto {
public:
    Docente() {}

    Docente(Iscritto iscritto);

    Docente(const Docente & other);

    ~Docente() = default;
};
#endif //ESAME_TPA_DOCENTE_H
