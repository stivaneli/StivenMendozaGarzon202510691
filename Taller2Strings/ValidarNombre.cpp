#include<iostream>
using namespace std;

bool validarLongitud(string nombreUsuario) {
    int longitud = nombreUsuario.length();
    return longitud >= 6 && longitud <= 12;
}
bool validarInicioLetra(string nombreUsuario) {
    if (nombreUsuario.empty()) {
        return false;
    }
    return isalpha(nombreUsuario[0]);
}
bool validarSinEspacios(string nombreUsuario) {
    for (char c : nombreUsuario) {
        if (isspace(c)) {
            return false;
        }
    }
    return true;
}
bool validarNombreUsuario(string nombreUsuario) {
    return validarLongitud(nombreUsuario) && validarInicioLetra(nombreUsuario) && validarSinEspacios(nombreUsuario);
}
int main() {
    string nombreUsuario;
    cout << "Ingrese un nombre de usuario: ";
    getline(cin, nombreUsuario);
    if (validarNombreUsuario(nombreUsuario)) {
        cout << "El nombre de usuario es válido." << endl;
    } else {
        cout << "El nombre de usuario no es válido." << endl;
    }
    return 0;
}
