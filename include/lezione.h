//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_LEZIONE_H
#define ESAME_TPA_LEZIONE_H

#include "data.h"
#include "ora.h"
#include "aula.h"



class Lezione {
protected:
    Data data;
    Ora ora;
    Ora durata;
    Aula aula;

public:
    Lezione() {} //costruttore di default

    Lezione(Data data, Ora ora, Ora durata, Aula aula);

    Lezione(const Lezione &other);

    ~Lezione() = default;

    const Data &getData() const;

    const Ora &getOra() const;

    const Ora &getDurata() const;

    const Aula &getAula() const;

    void printL();
};


#endif //ESAME_TPA_LEZIONE_H
