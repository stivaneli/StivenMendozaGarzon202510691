#include <iostream>
using namespace std;
 
int main() {
    string placas[6] = {"ABC123", "DEF456", "GHI789", "JKL012", "MNO345", "PQR678"};
    string ciudades[6] = {"Bogota", "Medellin", "Cali", "Bogota", "Cartagena", "Medellin"};
    float multas[6] = {150000, 200000, 175000, 300000, 250000, 180000};

    string ciudadBuscada;
    cout << "Ingrese una ciudad para buscar las multas: ";
    cin >> ciudadBuscada;

    float totalMultas = 0;
    bool found = false;

    cout << "Placas multadas en " << ciudadBuscada << ":\n";
    for (int i = 0; i < 6; i++) {
        if (ciudades[i] == ciudadBuscada) {
            cout << "Placa: " << placas[i] << " - Valor de la multa: $" << multas[i] << endl;
            totalMultas += multas[i];
            found = true;
        }
    }

    if (found) {
        cout << "Total de multas en " << ciudadBuscada << ": $" << totalMultas << endl;
    } else {
        cout << "No se encontraron multas en la ciudad de " << ciudadBuscada << ".\n";
    }

    return 0;
}