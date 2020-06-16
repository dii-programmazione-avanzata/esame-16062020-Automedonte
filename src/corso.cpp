//
// Created by Marcello Tenca on 16/06/2020.
//

#include "../include/corso.h"
#include "iostream"

using namespace std;


Corso::Corso(string nome, const Docente &docente, int ns, int nl, int anno) :
nome(nome), docente(docente), ns(ns), nl(nl), anno(anno) {
    // Creo array di lezioni e studenti "vuoti"
    list_studenti = new Studente[ns];
    list_lezioni = new Lezione[nl];

    index_l = 0;
    index_s = 0;
}

Corso::Corso(const Corso &other) :
        nome(other.nome), docente(other.docente), ns(other.ns), nl(other.nl), anno(other.anno) {
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

void Corso::cambiaDocente(Docente docente) {
    //metodo per cambiare l'insegnante di un corso

    this->docente = docente;
}

void Corso::aggiungiStudente(const Studente& studente) {
    //metodo per aggiungere uno studente al corso

    assert(index_s < ns);

    list_studenti[index_s] = studente;

    ++index_s;

}

void Corso::aggiungiLezione(const Lezione& lezione) {
    // simile al precedente

    assert(index_l < nl);

    list_lezioni[index_l] = lezione;

    ++index_l;
}

void Corso::print() {
    cout << "Nome corso: " << nome << endl;
    cout << "Anno: " << anno << endl;
    cout << "Numero studenti assegnati: " << index_s << endl;
    cout << "Numero lezioni programmate: " << index_l << endl;
    cout << "Nome docente: " << docente.getNome() << " " << docente.getCognome() << endl;
    cout << "Lezioni: " << endl;
    for (int i = 0; i <= index_l; ++i) {
        list_lezioni[index_l].print();
        cout << endl;
    }
}

bool Corso::corsi_insegnanti(const Docente& doc) {
    // La matricola deve essere univoca, quindi si può controllare solo quella
    return docente.getMatricola() == doc.getMatricola();
}

bool Corso::corso_aula(const Aula& aula) {
    bool flag = false;
    for (int i = 0; i <= index_l; ++i) {
        if (list_lezioni[i].getAula().getId() == aula.getId()) flag = true;
    }
    return flag;
}

Docente Corso::getDocente() {
    return docente;
}

Aula *Corso::getAula() {
    //Nota: questo metodo elenca tutte le aule inserite, anche ripetendole
    Aula *list_aula = new Aula[index_l];

    for (int i = 0; i <= index_l; ++i) {

        list_aula[i] = list_lezioni[i].getAula();
    }
    return list_aula;
}
