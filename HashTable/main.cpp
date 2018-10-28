#include <iostream>
#include "Manager.h"
#include "stdlib.h"

using namespace std;

int showMenu() {
    int option;

    cout << "------------------Hash abierto---------------------\n"
            "1. Ingresar persona\n"
            "2. Buscar persona\n"
            "3. Ingresar persona con key nombre\n"
            "4. Buscar persona con key nombre\n"
            "------------------Hash Cerrado---------------------\n"
            "5. Añadir persona a hash cerrado\n"
            "6. Buscar persona en hash cerrado\n"
            "7. Añadir persona con key nombre a hash cerrado\n"
            "8. Buscar persona con key nombre en hash cerrado\n"
            "9. salir\n";

    cout << "Seleccione una opcion";
    cin >> option;
    return option;
}


void addDataToOpen(Manager *openTable) {
    openTable->AddToOpen();
    cout << "Person added" << endl;
}

void getDataFromOpen(Manager *openTable) {
    openTable->GetFromOpen();
}

void addDataToNameOpen(Manager *openNameHash) {
    openNameHash->AddToNameOpen();
    cout << "Person added" << endl;
}

void getDataFromNameOpen(Manager *openNameHash) {
    openNameHash->GetFromNameOpen();
}

void addDataToClose(Manager *closeHash) {
    // Code here
}

void getDataFromClose(Manager *closeHash) {
    // Code here
}

void addDataToNameClose(Manager *closeHash) {
    // Code here
}

void getDataFromNameClose(Manager *closeHash) {
    // Code here
}

void selectOption(int _opc, Manager *hash) {
    switch (_opc) {
        case 1:
            addDataToOpen(hash);
            break;
        case 2:
            getDataFromOpen(hash);
            break;
        case 3:
            addDataToNameOpen(hash);
            break;
        case 4:
            getDataFromNameOpen(hash);
            break;
        case 5:
            addDataToClose(hash);
            break;
        case 6:
            getDataFromClose(hash);
            break;
        case 7:
            addDataToNameClose(hash);
            break;
        case 8:
            getDataFromNameClose(hash);
            break;
        case 9:
            cout << "\nSaliendo";
            break;
        default:
            cout << "\nEsta opcion no es reconocida";
    }
}

int main() {

    Manager * m = new Manager();

    int opc;
    do {
        opc = showMenu();
        selectOption(opc, m);

    } while (opc != 9);

    delete m;

    return 0;
}
