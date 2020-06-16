//
// Created by Marcello Tenca on 16/06/2020.
//

#include "iostream"
#include "include/docente.h"
#include "include/corso.h"
#include "include/percorso.h"

// NOTA: per mancanza di tempo, non si è riusciti a risolvere un errore di allocazione dinamica,
// che viene presentato all'esecuzione del main.

int main() {

    Iscritto x("mario", "rossi", 193070);

    Docente y (x);

    Corso prova ("ciao", y, 10, 20, 2);

    Data data(1, 1 ,2020);
    Ora ora(12, 0);
    Ora durata(2,10);
    Aula aula(107, 190);

    Lezione lez(data, ora, durata, aula);

    prova.aggiungiStudente(x);
    prova.aggiungiLezione(lez);


   auto corso = new Corso[1];

   Percorso test (1, corso);

   //test.addCorso(prova);


    prova.print();

    return 0;
}