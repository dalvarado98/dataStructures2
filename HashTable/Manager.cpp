//
// Created by dania on 27/10/2018.
//

#include "Manager.h"

Manager::Manager() {
    openHash = new HashTable();
    openNameHash = new HashTable();
}

Manager::~Manager() {

}

void Manager::AddToOpen() {
    int id;
    string name;
    cout << "Por favor ingrese" << endl;
    cout << "Cedula: "; cin >>  id; cout << endl;
    cout << "Nombre: "; cin >> name; cout << endl;

    openHash->addValor(numHash(id),new Values(new Person(id, name)));
}

void Manager::GetFromOpen() {
    int id;
    cout << "Por favor ingrese el dato que desea buscar" << endl;
    cout << "Cedula: "; cin >>  id; cout << endl;
    Values *v = openHash->getNumero(numHash(id),id);
    cout << "Cedula: " << v->getPerson()->getId(); cout << endl;
    cout << "Nombre: " << v->getPerson()->getName(); cout << endl;
}

int Manager::numHash(int id) {
    return (id%(HashTable::MAX-1));
}

int Manager::charhash(char *name) {
    int valor;
    char *c;
    for (c=name,valor=0;*c;c++)
        valor+=(int)(*c);
    return(valor%13);
}

void Manager::AddToNameOpen() {
    int id;
    char *name[50];
    cout << "Por favor ingrese" << endl;
    cout << "Cedula: "; cin >>  id; cout << endl;
    cout << "Nombre: "; cin >> *name; cout << endl;

    openNameHash->addValor(charhash(*name),new Values(new Person(id, *name)));
}

void Manager::GetFromNameOpen() {
    char* name[50];
    cout << "Por favor ingrese el nombre que desea buscar" << endl;
    cout << "Nombre: "; cin >>  *name; cout << endl;
    Values *v = openNameHash->getName(charhash(*name),*name);
    cout << "Cedula: " << v->getPerson()->getId(); cout << endl;
    cout << "Nombre: " << v->getPerson()->getName(); cout << endl;
}
