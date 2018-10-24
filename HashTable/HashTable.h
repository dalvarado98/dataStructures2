//
// Created by dania on 23/10/2018.
//

#ifndef HASHTABLE_HASHTABLE_H
#define HASHTABLE_HASHTABLE_H

#include "Values.h"

class HashTable {
public:
    HashTable();
    ~HashTable();
    void addValor(int indice, Values * ptr);
    Values * getNumero(int indice, long num);
    static enum {MAX = 30};
private:
    Values * m_vector[MAX];

};


#endif //HASHTABLE_HASHTABLE_H
