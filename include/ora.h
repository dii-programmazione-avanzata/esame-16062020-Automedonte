//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_ORA_H
#define ESAME_TPA_ORA_H

#include "assert.h"

class Ora {
protected:
    int ore;
    int minuti;

public:
    Ora(int ore, int minuti) : ore(ore), minuti(minuti) {}

    Ora(const Ora & other) : ore(other.ore), minuti(other.minuti) {}

    ~Ora() = default;

    int getOre() const {
        return ore;
    }

    int getMinuti() const {
        return minuti;
    }

    Ora getOra() {
        return *this;
    }


    Ora durata(Ora inizio, Ora fine) {
        if (fine.minuti - inizio.minuti > 0) {
            int minuti = fine.minuti - inizio.minuti;
            int ore = fine.ore - inizio.ore;
        }
        else {
            int minuti = fine.minuti - inizio.minuti + 60;
            int ore = fine.ore - inizio.ore - 1;
            assert(ore >= 0);
        }
        return Ora(ore, minuti);
    }
};
#endif //ESAME_TPA_ORA_H
