#include<iostream>
using namespace std;

bool isConsonant(char c) {
    c = tolower(c); 
    return (c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
string onlyConsonant(const string &palabra) {
    string resultado;
    for (char c : palabra) {
        if (isConsonant(c)) {
            resultado += c;
        }
    }
    return resultado;
}
int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    string consonantes = onlyConsonant(palabra);
    cout << "Solo consonantes: " << consonantes << endl;

    return 0;
}

