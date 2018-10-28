//
// Created by dania on 27/10/2018.
//

#ifndef HASHTABLE_PERSON_H
#define HASHTABLE_PERSON_H

#include <string>
using namespace std;

class Person {
private:
    int id;
    string name;
public:
    Person();
    Person(int, string);
    ~Person();
    int getId();
    void setId(int);
    string getName();
    void setName(string);
};


#endif //HASHTABLE_PERSON_H
