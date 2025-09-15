#include <iostream>
using namespace std;

void mostrarTabla(int number) {
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {
    int numero;
    cout << "Ingrese un número para mostrar su tabla de multiplicar: ";
    cin >> numero;
    mostrarTabla(numero);
    return 0;
}
