//
// Created by dania on 23/10/2018.
//

#include "HashTable.h"

HashTable::HashTable() {
    for (int i = 0; i < MAX; i++)
        m_vector [i] = NULL;
}

HashTable::~HashTable() {
    for (int i = 0; i < MAX; i++)
        if (m_vector [i] != NULL)
        { delete m_vector[i]; }
}

void HashTable::addValor(int indice, Values *ptr) {
    if (m_vector[indice] == NULL)
        m_vector[indice] = ptr;
    else
    {
        Values * aux = m_vector[indice];
        while (aux->getSig() != NULL)
            aux = aux->getSig();
        aux->setSig(ptr);
    }
}

Values *HashTable::getNumero(int indice, int id) {
    Values * aux = m_vector[indice];
    while (aux != NULL && aux->getPerson()->getId() != id)
        aux = aux->getSig();
    return aux;
}

Values *HashTable::getName(int indice, char *name) {
    Values * aux = m_vector[indice];
    while (aux != NULL && aux->getPerson()->getName() != name)
        aux = aux->getSig();
    return aux;
}
