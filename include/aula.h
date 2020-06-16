//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_AULA_H
#define ESAME_TPA_AULA_H


class Aula {
protected:
    int ID;
    int posti;

public:
    Aula() {}

    Aula(int ID, int posti);

    Aula(const Aula & other);

    ~Aula() = default;

    int getId() const;

    int getPosti() const;
};

#endif //ESAME_TPA_AULA_H
