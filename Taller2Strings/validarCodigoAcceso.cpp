#include<iostream>
using namespace std;
//verificar si un codigo cumple con tener almenos un digito, un signo especial y no tener espacios 
bool contieneDigito(string codigoAcceso) {
    for (char c : codigoAcceso) {
        if (isdigit(c)) {
            return true;
        }
    }
    return false;
}
bool contieneSignoEspecial(string codigoAcceso) {
    string signosEspeciales = "!@#$%^&*()-_=+[]{}|;:'\",.<>?/`~";
    for (char c : codigoAcceso) {
        if (signosEspeciales.find(c) != string::npos) {
            return true;
        }
    }
    return false;
}
bool contieneEspacios(string codigoAcceso) {
    for (char c : codigoAcceso) {
        if (isspace(c)) {
            return true;
        }
    }
    return false;
}
bool validarCodigoAcceso(string codigoAcceso) {
    return contieneDigito(codigoAcceso) && contieneSignoEspecial(codigoAcceso) && !contieneEspacios(codigoAcceso);
}
int main() {
    string codigoAcceso;
    cout << "Ingrese un código de acceso: ";
    getline(cin, codigoAcceso);
    if (validarCodigoAcceso(codigoAcceso)) {
        cout << "El código de acceso es válido." << endl;
    } else {
        cout << "El código de acceso no es válido." << endl;
    }
    return 0;
}   