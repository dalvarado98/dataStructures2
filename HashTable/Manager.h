//
// Created by dania on 27/10/2018.
//

#ifndef HASHTABLE_MANAGER_H
#define HASHTABLE_MANAGER_H

#include "HashTable.h"
#include "HashTableClose.h"

class Manager {
private:
    HashTable *openHash;
    HashTable *openNameHash;
public:
    Manager();
    ~Manager();
    void AddToOpen();
    void AddToNameOpen();
    void GetFromOpen();
    void GetFromNameOpen();
    int numHash(int id);
    int charhash(char *);


};


#endif //HASHTABLE_MANAGER_H
