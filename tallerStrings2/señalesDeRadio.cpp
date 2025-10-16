#include<iostream>
using namespace std;

float calcularPromedio(string secuencia) {
    int countPos = 0;
    int countNeg = 0;

    for (char c : secuencia) {
        if (c == '-') {
            countPos++;
        } else if (c == '.') {
            countNeg++;
        }
    }

    if (countNeg == 0) {
        return countPos; 
    }

    return static_cast<float>(countPos) / countNeg;
}
int main() {
    string secuencia;
    cout << "Ingrese la secuencia de señales (usando '-' para positivo y '.' para negativo): ";
    getline(cin, secuencia);
    float promedio = calcularPromedio(secuencia);
    cout << "El promedio de señales positivas sobre negativas es: " << promedio << endl;
    return 0;
}
