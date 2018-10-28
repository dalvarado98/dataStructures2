//
// Created by dania on 23/10/2018.
//

#ifndef HASHTABLE_VALUES_H
#define HASHTABLE_VALUES_H

#include <iostream>
#include "Person.h"

class Values {
private:
    Person *person;
    Values * m_sig;
public:
    Values();
    Values(Person *person, Values * ptr = NULL);
    ~Values();
    void setPerson(Person *person);
    void setSig(Values * ptr);
    Person *getPerson();
    Values * getSig();
};


#endif //HASHTABLE_VALUES_H
