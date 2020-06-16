//
// Created by Marcello Tenca on 16/06/2020.
//

#include "iostream"
#include "include/docente.h"
#include "include/corso.h"


int main() {

    Iscritto x("mario", "rossi", 193070);

    Docente y (x);

    Corso prova ("ciao", y, 10, 20, 2);

    prova.aggiungiStudente(x);
   // prova.aggiungiLezione(lez)

    prova.print();

    return 0;
}