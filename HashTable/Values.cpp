//
// Created by dania on 23/10/2018.
//

#include "Values.h"

Values::Values() {
    m_num = 0;
    m_sig = NULL;
}

Values::Values(long num, Values *ptr) {
    m_num = num;
    m_sig = ptr;
}

Values::~Values() {
    if (m_sig != NULL)
        delete m_sig;
}

void Values::setNum(long num) {
    this->m_num = num;
}

void Values::setSig(Values *ptr) {
    m_sig = ptr;
}

long Values::getNum() {
    return m_num;
}

Values *Values::getSig() {
    return m_sig;
}
