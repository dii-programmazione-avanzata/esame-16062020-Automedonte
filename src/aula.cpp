//
// Created by Marcello Tenca on 16/06/2020.
//

#include "../include/aula.h"

Aula::Aula(int ID, int posti) : ID(ID), posti(posti) {}

Aula::Aula(const Aula &other) :ID(other.ID), posti(other.posti) {}

int Aula::getId() const {
    return ID;
}

int Aula::getPosti() const {
    return posti;
}
