#include <iostream>
using namespace std;

bool requiresMaintenance(int sheets, int interval) {
    return (sheets % interval == 0);
}

int main() {
    int sheets, interval;
    cout << "Ingrese la cantidad de hojas producidas: ";
    cin >> sheets;
    cout << "Ingrese el intervalo de mantenimiento: ";
    cin >> interval;

    if (requiresMaintenance(sheets, interval)) {
        cout << "La máquina requiere mantenimiento." << endl;
    } else {
        cout << "La máquina no requiere mantenimiento." << endl;
    }

    return 0;
}