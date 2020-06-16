//
// Created by Marcello Tenca on 16/06/2020.
//

#ifndef ESAME_TPA_DATA_H
#define ESAME_TPA_DATA_H


class Data {
protected:
    int giorno;
    int mese;
    int anno;

public:
    Data(int giorno, int mese, int anno) : giorno(giorno), mese(mese), anno(anno) {}

    Data(const Data & other) : giorno(other.giorno), mese(other.mese), anno(other.anno) {}

    ~Data() = default;

    int getGiorno() const {
        return giorno;
    }

    int getMese() const {
        return mese;
    }

    int getAnno() const {
        return anno;
    }
};
#endif //ESAME_TPA_DATA_H
