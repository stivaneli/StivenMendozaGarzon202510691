#include<iostream>
using namespace std;
// analiza una frase y contar cuantas palabras tiene(separadas por espacios), cuantos signos de puntuacion y verificar si termina en pubnto.
int contarPalabras(string frase) {
    int contadorPalabras = 0;
    bool enPalabra = false;
    for (char c : frase) {
        if (isspace(c)) {
            if (enPalabra) {
                contadorPalabras++;
                enPalabra = false;
            }
        } else {
            enPalabra = true;
        }
    }
    if (enPalabra) {
        contadorPalabras++;
    }
    return contadorPalabras;
}
int contarSignosPuntuacion(string frase) {
    int contadorSignos = 0;
    for (char c : frase) {
        if (c == '.' || c == ',' || c == '!' || c == '?' || c == ';' || c == ':') {
            contadorSignos++;
        }
    }
    return contadorSignos;
}
bool terminaEnPunto(string frase) {
    if (frase.empty()) {
        return false;
    }
    return frase.back() == '.';
}
int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    int palabras = contarPalabras(frase);
    int signosPuntuacion = contarSignosPuntuacion(frase);
    bool terminaPunto = terminaEnPunto(frase);
    cout << "Número de palabras: " << palabras << endl;
    cout << "Número de signos de puntuación: " << signosPuntuacion << endl;
    if (terminaPunto) {
        cout << "La frase termina en punto." << endl;
    } else {
        cout << "La frase no termina en punto." << endl;
    }
    return 0;
}       