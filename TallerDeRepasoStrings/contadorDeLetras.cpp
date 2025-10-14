#include <iostream>
using namespace std;

int countCommonLetters(const string &word1, const string &word2) {
    int count = 0;
    for (char ch1 : word1) {
        for (char ch2 : word2) {
            if (tolower(ch1) == tolower(ch2)) {
                count++;
                break; 
            }
        }
    }
    return count;
}
int main() {
    string word1, word2;
    cout << "Ingrese la primera palabra: ";
    cin >> word1;
    cout << "Ingrese la segunda palabra: ";
    cin >> word2;

    int commonLetterCount = countCommonLetters(word1, word2);
    cout << "Número de letras comunes en ambas palabras: " << commonLetterCount << endl;

    return 0;
}
