#include<iostream>
using namespace std;

//Solicitar al usuario un número y varias palabras (terminando con la palabra 'fin'). Contar cuántas palabras tienen una longitud mayor al número ingresado.
int countWordsLongerThanNumber(int number) {
    string word;
    int count = 0;
    cout << "Ingrese palabras (termine con 'fin'):" << endl;
    while (true) {
        cin >> word;
        if (word == "fin") {
            break;
        }
        if (word.length() > number) {
            count++;
        }
    }
    return count;
}
int main() {
    int number;
    cout << "Ingrese un número: ";
    cin >> number;
    int longerWordCount = countWordsLongerThanNumber(number);
    cout << "Número de palabras con longitud mayor a " << number << ": " << longerWordCount << endl;
    return 0;
}


