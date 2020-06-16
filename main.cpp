//
// Created by Marcello Tenca on 16/06/2020.
//

#include "iostream"
#include "include/docente.h"


int main() {

    Iscritto x("mario", "rossi", 193070);

    Docente y (x);

    std::cout << y.getNome();

    return 0;
}