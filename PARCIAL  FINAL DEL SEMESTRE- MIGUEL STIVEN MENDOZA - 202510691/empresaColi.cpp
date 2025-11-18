#include <iostream>
#include <string>
#include <limits> 
#include <cctype> 

using namespace std;


bool validateName(string name) {
    if (name.empty()) return false;
    if (!isupper(name[0])) {
        cout << ">> Error: Primera letra debe ser mayuscula.\n";
        return false;
    }
    bool hasDigit = false;
    for (size_t i = 0; i < name.length(); i++) {
        if (isspace(name[i])) {
            cout << ">> Error: No se permiten espacios.\n";
            return false;
        }
        if (isdigit(name[i])) hasDigit = true;
    }
    if (!hasDigit) {
        cout << ">> Error: Falta al menos un numero.\n";
        return false;
    }
    return true;
}


void registerPackages(string*& names, int*& weights, bool*& delivered, int& size) {
    cout << "\n--- REGISTRAR PAQUETES ---\n";
    cout << "Cantidad de paquetes a ingresar: ";
    

    while (!(cin >> size) || size <= 0) {
        cout << "Ingrese un numero valido mayor a 0: ";
        cin.clear(); cin.ignore(10000, '\n');
    }
    cin.ignore(10000, '\n'); // Limpiar buffer

    delete[] names;
    delete[] weights;
    delete[] delivered;

    names = new string[size];
    weights = new int[size];
    delivered = new bool[size];

    for (int i = 0; i < size; i++) {
        cout << "\n[Paquete " << i + 1 << "]\n";
        
        do {
            cout << " - Nombre (Ej: Caja1): ";
            cin >> names[i];
            cin.ignore(10000, '\n'); 
        } while (!validateName(names[i]));

        cout << " - Peso (kg): ";
        while (!(cin >> weights[i])) {
            cout << "   Error. Ingrese solo numeros: ";
            cin.clear(); cin.ignore(10000, '\n');
        }
        cin.ignore(10000, '\n');


        int st;
        cout << " - Estado (1=Entregado, 0=Pendiente): ";
        while (!(cin >> st) || (st != 0 && st != 1)) {
            cout << "   Use 1 o 0: ";
            cin.clear(); cin.ignore(10000, '\n');
        }
        cin.ignore(10000, '\n');
        delivered[i] = (st == 1);
    }
    cout << "\n>> Registro completado con exito.\n";
}

void printPackages(string names[], int weights[], bool delivered[], int size) {
    if (size == 0) {
        cout << "\n>> No hay paquetes registrados aun.\n";
        return;
    }
    cout << "\n--- LISTA ACTUAL ---\n";
    for (int i = 0; i < size; i++) {
        cout << (i + 1) << ". " << names[i] 
             << " -> " << weights[i] << " kg -> " 
             << (delivered[i] ? "Entregado" : "Pendiente") << endl;
    }
}

void modifyPackage(string names[], int weights[], bool delivered[], int size) {
    if (size == 0) { cout << "\n>> Vacio.\n"; return; }
    printPackages(names, weights, delivered, size);

    int idx;
    cout << "\nNumero de paquete a editar: ";
    cin >> idx; cin.ignore(10000, '\n');
    idx--; 

    if (idx < 0 || idx >= size) { cout << "Indice invalido.\n"; return; }

    string nuevoNombre;
    do {
        cout << "Nuevo Nombre: ";
        cin >> nuevoNombre; cin.ignore(10000, '\n');
    } while (!validateName(nuevoNombre));
    names[idx] = nuevoNombre;

    cout << "Nuevo Peso: ";
    cin >> weights[idx]; cin.ignore(10000, '\n');

    int st;
    cout << "Nuevo Estado (1=Ent, 0=Pend): ";
    cin >> st; cin.ignore(10000, '\n');
    delivered[idx] = (st == 1);
}


void filterByDeliveryStatus(string names[], int weights[], bool delivered[], int size) {
    if (size == 0) { cout << "\n>> Vacio.\n"; return; }
    cout << "1. Entregados | 2. Pendientes: ";
    int op; cin >> op; cin.ignore(10000, '\n');
    
    bool busco = (op == 1);
    bool encontre = false;
    for(int i=0; i<size; i++){
        if(delivered[i] == busco) {
            cout << names[i] << " -> " << weights[i] << " kg\n";
            encontre = true;
        }
    }
    if(!encontre) cout << "Ninguno encontrado.\n";
}

void filterByWeightAndReplace(string*& names, int*& weights, bool*& delivered, int& size) {
    if (size == 0) { cout << "\n>> Vacio.\n"; return; }
    
    int lim;
    cout << "Peso limite: "; cin >> lim; cin.ignore(10000, '\n');

    int newSize = 0;
    for(int i=0; i<size; i++) if(weights[i] > lim) newSize++;

    if(newSize == 0) { cout << "Ningun paquete supera ese peso.\n"; return; }

    string* nNames = new string[newSize];
    int* nWeights = new int[newSize];
    bool* nDelivered = new bool[newSize];

    int p = 0;
    for(int i=0; i<size; i++) {
        if(weights[i] > lim) {
            nNames[p] = names[i];
            nWeights[p] = weights[i];
            nDelivered[p] = delivered[i];
            p++;
        }
    }

    cout << "\n--- VISTA PREVIA (> " << lim << "kg) ---\n";
    for(int i=0; i<newSize; i++) cout << nNames[i] << "\n";

    cout << "Reemplazar lista original? (1=Si, 2=No): ";
    int op; cin >> op; cin.ignore(10000, '\n');

    if(op == 1) {
        delete[] names; delete[] weights; delete[] delivered;
        names = nNames; weights = nWeights; delivered = nDelivered;
        size = newSize;
        cout << "Lista reemplazada.\n";
    } else {
        delete[] nNames; delete[] nWeights; delete[] nDelivered;
    }
}

int main() {
    string* names = nullptr;
    int* weights = nullptr;
    bool* delivered = nullptr;
    int size = 0; 
    int op = 0;

    do {
        cout << "\n=== COLI-EXPRESS (Paquetes en memoria: " << size << ") ===\n";
        cout << "1. Registrar\n2. Mostrar\n3. Modificar\n4. Estado\n5. Filtro Peso (Bonus)\n6. Salir\nOpción: ";
        
        if (!(cin >> op)) {
            cin.clear(); cin.ignore(10000, '\n');
            continue;
        }
        cin.ignore(10000, '\n');

        switch(op) {
            case 1: registerPackages(names, weights, delivered, size); break;
            case 2: printPackages(names, weights, delivered, size); break;
            case 3: modifyPackage(names, weights, delivered, size); break;
            case 4: filterByDeliveryStatus(names, weights, delivered, size); break;
            case 5: filterByWeightAndReplace(names, weights, delivered, size); break;
            case 6: cout << "Adios.\n"; break;
        }
    } while(op != 6);

    delete[] names; delete[] weights; delete[] delivered;
    return 0;
}