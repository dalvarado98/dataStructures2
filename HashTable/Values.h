//
// Created by dania on 23/10/2018.
//

#ifndef HASHTABLE_VALUES_H
#define HASHTABLE_VALUES_H

#include <iostream>

class Values {
private:
    long m_num;
    Values * m_sig;
public:
    Values();
    Values(long num, Values * ptr = NULL);
    ~Values();
    void setNum (long num);
    void setSig(Values * ptr);
    long getNum ();
    Values * getSig();
};


#endif //HASHTABLE_VALUES_H
