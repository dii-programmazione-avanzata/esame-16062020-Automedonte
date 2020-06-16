//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_CORSO_H
#define ESAME_TPA_CORSO_H


#include "docente.h"
#include "studente.h"
#include "lezione.h"

class Corso {
protected:
    Docente docente;
    int ns; //numero di studenti
    int index_s; //indice inizializzazione studenti
    Studente *list_studenti;
    int nl; //numero di lezioni previste
    int index_l; //indice inizializzazione lezioni
    Lezione *list_lezioni;
    int anno;

public:
    Corso(const Docente &docente, int ns, int nl, int anno);

    Corso(const Corso & other);

    ~Corso();




    void cambiaDocente(Docente docente);

    void aggiungiStudente(Studente studente);

    void aggiungiLezione(Lezione lezione);

    void print();

    bool corsi_insegnanti(Docente);

    bool corso_aula(Aula);

    Docente getDocente();

    Aula * getAula();
};
#endif //ESAME_TPA_CORSO_H
