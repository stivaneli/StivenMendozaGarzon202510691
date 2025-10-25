#include<iostream>
using namespace std;

int contarVocales(string texto) {
    int contadorVocales = 0;
    for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contadorVocales++;
        }
    }
    return contadorVocales;
}
int contarConsonantes(string texto) {
    int contadorConsonantes = 0;
    for (char c : texto) {
        c = tolower(c);
        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            contadorConsonantes++;
        }
    }
    return contadorConsonantes;
}
int contarNoLetras(string texto) {
    int contadorNoLetras = 0;
    for (char c : texto) {
        if (!isalpha(c)) {
            contadorNoLetras++;
        }
    }
    return contadorNoLetras;
}
int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    int vocales = contarVocales(texto);
    int consonantes = contarConsonantes(texto);
    int noLetras = contarNoLetras(texto);
    cout << "Número de vocales: " << vocales << endl;
    cout << "Número de consonantes: " << consonantes << endl;
    cout << "Número de caracteres que no son letras: " << noLetras << endl;
    return 0;
}