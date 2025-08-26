#include <iostream>
using namespace std;

int main() {
    int num1, num2, opcion;
    float resultado;

    cout << "calculadora de operaciones basicas" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\nElija la operacion que desea realizar:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo (%)" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "Resultado de la suma: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "Resultado de la resta: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "Resultado de la multiplicacion: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = (float)num1 / num2;
                cout << "Resultado de la division: " << resultado << endl;
            } else {
                cout << "no se puede dividir entre 0." << endl;
            }
            break;
        case 5:
            if (num2 != 0) {
                cout << "Resultado del modulo: " << (num1 % num2) << endl;
            } else {
                cout << "no se puede calcular modulo con divisor 0." << endl;
            }
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
    }

    return 0;
}
