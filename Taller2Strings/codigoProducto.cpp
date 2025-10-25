#include<iostream>
using namespace std;

int contarGuiones(string codigoProducto) {
    int contadorGuiones = 0;
    for (char c : codigoProducto) {
        if (c == '-') {
            contadorGuiones++;
        }
    }
    return contadorGuiones;
}
int contarDigitos(string codigoProducto) {
    int contadorDigitos = 0;
    for (char c : codigoProducto) {
        if (isdigit(c)) {   
            contadorDigitos++;
        }
    }
    return contadorDigitos;
}
bool validarUltimoCaracterMayuscula(string codigoProducto) {
    if (codigoProducto.empty()) {
        return false;
    }
    char ultimoCaracter = codigoProducto.back();
    return isupper(ultimoCaracter);
}
int main() {
    string codigoProducto;
    cout << "Ingrese un código de producto (formato AAA-1234-BB): ";
    getline(cin, codigoProducto);
    int guiones = contarGuiones(codigoProducto);
    int digitos = contarDigitos(codigoProducto);
    bool ultimoMayuscula = validarUltimoCaracterMayuscula(codigoProducto);
    cout << "Número de guiones: " << guiones << endl;
    cout << "Número de dígitos: " << digitos << endl;
    if (ultimoMayuscula) {
        cout << "El código termina con una letra mayúscula." << endl;
    } else {
        cout << "El código no termina con una letra mayúscula." << endl;
    }
    return 0;
}