//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_PERCORSO_H
#define ESAME_TPA_PERCORSO_H


#include "corso.h"

class Percorso {
protected:
    int nc; // numero di corsi
    int index_c; //indice dei corsi aggiunti
    Corso * list_corsi; //array di corsi

public:
    Percorso(int nc, Corso *listCorsi);

    Percorso(const Percorso & other);

    ~Percorso();


    void addCorso(Corso corso);

    void printP();

    void corsiInsegnatiD(Docente doc);

    void corsiInsegnatiA(Aula aula);

    bool checkPosti();

    bool checkTiming(); //Non definita per mancanza di tempo


};
#endif //ESAME_TPA_PERCORSO_H
