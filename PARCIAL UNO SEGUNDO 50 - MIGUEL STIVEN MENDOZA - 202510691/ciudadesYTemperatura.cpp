#include <iostream>
using namespace std;

int main() {
    string cities[10] = {"Bogota", "Medellin", "Cali", "Barranquilla", "Cartagena", "Bucaramanga", "Pereira", "Manizales", "Cucuta", "Santa Marta"};
    float temperatures[10] = {14, 22, 24, 28, 30, 26, 25, 27, 29, 31};

    float minTemp, maxTemp;
    cout << "Ingrese la temperatura minima: ";
    cin >> minTemp;
    cout << "Ingrese la temperatura maxima: ";
    cin >> maxTemp;

    cout << "Ciudades con temperaturas entre " << minTemp << " y " << maxTemp << ":\n";
    float sumTemp = 0;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        if (temperatures[i] >= minTemp && temperatures[i] <= maxTemp) {
            cout << cities[i] << " - " << temperatures[i] << "°C\n";
            sumTemp += temperatures[i];
            count++;
        }
    }

    if (count > 0) {
        float avgTemp = sumTemp / count;
        cout << "Temperatura promedio de las ciudades en el rango: " << avgTemp << "°C\n";
    } else {
        cout << "No hay ciudades en la base de datos con esas temperaturas.\n";
    }

    return 0;
}