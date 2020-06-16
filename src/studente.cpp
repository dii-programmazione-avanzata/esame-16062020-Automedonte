//
// Created by Marcello Tenca on 16/06/2020.
//

#include "../include/studente.h"

Studente::Studente(Iscritto iscritto) : Iscritto(iscritto) {}

Studente::Studente(const Studente &other) : Iscritto(other) {}
