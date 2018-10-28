//
// Created by dania on 23/10/2018.
//

#include "Values.h"

Values::Values() {
    this->person = NULL;
    this->m_sig = NULL;
}

Values::Values(Person *person, Values *ptr) {
    this->person = person;
    this->m_sig = ptr;
}

Values::~Values() {
    if (m_sig != NULL)
        delete m_sig;
}

void Values::setPerson(Person *person) {
    this->person = person;
}

void Values::setSig(Values *ptr) {
    m_sig = ptr;
}

Person *Values::getPerson() {
    return this->person;
}

Values *Values::getSig() {
    return m_sig;
}
