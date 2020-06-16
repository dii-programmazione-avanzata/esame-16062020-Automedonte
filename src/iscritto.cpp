//
// Created by Marcello Tenca on 16/06/2020.
//

#include "../include/iscritto.h"

Iscritto::Iscritto(string nome, string cognome, int matricola) :
                    nome(nome), cognome(cognome), matricola(matricola) {}

Iscritto::Iscritto(const Iscritto &other) :
nome(other.nome), cognome(other.cognome), matricola(other.matricola) {}

const string &Iscritto::getNome() const {
    return nome;
}

const string &Iscritto::getCognome() const {
    return cognome;
}

int Iscritto::getMatricola() const {
    return matricola;
}
