//
// Created by Marcello Tenca on 16/06/2020.
//

#include "../include/corso.h"

Corso::Corso(const Docente &docente, int ns, int nl, int anno) :
docente(docente), ns(ns), nl(nl), anno(anno) {
    // Creo array di lezioni e studenti "vuoti"
    list_studenti = new Studente[ns];
    list_lezioni = new Lezione[nl];

    index_l = 0;
    index_s = 0;
}

Corso::Corso(const Corso &other) :
        docente(other.docente), ns(other.ns), nl(other.nl), anno(anno) {
    list_studenti = new Studente[ns];
    list_lezioni = new Lezione[nl];

    for (int i = 0; i < ns; ++i) {
        list_studenti[i] = other.list_studenti[i];
    }

    for (int i = 0; i < nl; ++i) {
        list_lezioni[i] = other.list_lezioni[i];
    }

    index_l = other.index_l;
    index_s = other.index_s;
}

Corso::~Corso() {
    delete[] list_lezioni;
    delete[] list_studenti;
}
