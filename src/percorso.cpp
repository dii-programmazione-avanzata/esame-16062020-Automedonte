//
// Created by Marcello Tenca on 16/06/2020.
//

#include "../include/percorso.h"
#include "iostream"

Percorso::Percorso(int nc, Corso *listCorsi) : nc(nc) {
    list_corsi = new Corso[nc];

    index_c = 0;
}

Percorso::Percorso(const Percorso &other) :
    nc(other.nc), index_c(other.index_c) {
        list_corsi = new Corso[nc];

        for (int i = 0; i <= index_c; ++i) {
            list_corsi[i] = other.list_corsi[i];
        }
}


Percorso::~Percorso() {
    delete[] list_corsi;
}

void Percorso::addCorso(Corso corso) {

    assert(index_c < nc);

    list_corsi[index_c] = corso;

    ++index_c;
}

void Percorso::printP() {
    for (int i = 0; i <= index_c; ++i) {
        list_corsi[i].print();
        cout << endl << endl;
    }
}

void Percorso::corsiInsegnatiD(Docente doc) {
    cout << "Corsi tenuti da " << doc.getNome() << " " << doc.getCognome() << ":" << endl;
    for (int i = 0; i < index_c; ++i) {
        if (list_corsi[i].corsi_insegnanti(doc)) {
            cout << list_corsi[i].getName() << endl;
        }
    }
}

void Percorso::corsiInsegnatiA(Aula aula) {
    cout << "Corsi tenuti nell'aula " << aula.getId() << endl;
    for (int i = 0; i < index_c; ++i) {
        if (list_corsi[i].corso_aula(aula)) {
            cout << list_corsi[i].getName() << endl;
        }
    }
}

