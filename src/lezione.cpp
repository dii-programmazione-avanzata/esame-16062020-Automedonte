//
// Created by Marcello Tenca on 16/06/2020.
//

#include "../include/lezione.h"


Lezione::Lezione(Data data, Ora ora, Ora durata, Aula aula) :
                            data(data), ora(ora), durata(durata), aula(aula) {}

Lezione::Lezione(const Lezione &other) :
                            data(other.data), ora(other.ora), durata(other.durata), aula(other.aula) {}

const Data &Lezione::getData() const {
    return data;
}

const Ora &Lezione::getOra() const {
    return ora;
}

const Ora &Lezione::getDurata() const {
    return durata;
}

const Aula &Lezione::getAula() const {
    return aula;
}


