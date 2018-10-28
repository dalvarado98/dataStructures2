//
// Created by dania on 27/10/2018.
//

#include "Person.h"

int Person::getId() {
    return id;
}

string Person::getName() {
    return name;
}

void Person::setId(int _id) {
    this->id = _id;
}

void Person::setName(string _name) {
    this->name = _name;
}

Person::Person() {
    setId(0);
    setName("null");
}

Person::Person(int _id, string _name) {
    setId(_id);
    setName(_name);
}

Person::~Person() {
}
