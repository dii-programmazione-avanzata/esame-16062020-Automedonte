//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_LEZIONE_H
#define ESAME_TPA_LEZIONE_H

#include "data.h"
#include "ora.h"
#include "aula.h"

class Corso;

class Lezione {
protected:
  //  Corso corso;
    Data data;
    Ora ora;
    Ora durata;
    Aula aula;

public:
    Lezione(Data data, Ora ora, Ora durata, Aula aula);

    Lezione(const Lezione &other);

    ~Lezione() = default;

    const Data &getData() const;

    const Ora &getOra() const;

    const Ora &getDurata() const;

    const Aula &getAula() const;
};


#endif //ESAME_TPA_LEZIONE_H
