//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_ISCRITTO_H
#define ESAME_TPA_ISCRITTO_H

#include <string>

using namespace std;

class Iscritto {
protected:
    string nome;
    string cognome;
    int matricola;

public:
    Iscritto() {}

    Iscritto(string nome, string cognome, int matricola);

    Iscritto(const Iscritto & other);

    ~Iscritto() = default;

    const string &getNome() const;

    const string &getCognome() const;

    int getMatricola() const;

};
#endif //ESAME_TPA_ISCRITTO_H
