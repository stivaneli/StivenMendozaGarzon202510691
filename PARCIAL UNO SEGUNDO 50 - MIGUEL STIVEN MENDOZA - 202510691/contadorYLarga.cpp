#include <iostream>
using namespace std;

int main() {
    string phrase;
    cout << "Ingrese una frase: ";
    getline(cin, phrase);

    int count = 0;
    string longestWord = "";
    string currentWord = "";

    for (char c : phrase) {
        if (c == ' ') {
            if (!currentWord.empty()) {
                count++;
                if (currentWord.length() > longestWord.length()) {
                    longestWord = currentWord;
                }
                currentWord = "";
            }
        } else {
            currentWord += c;
        }
    }

    if (!currentWord.empty()) {
        count++;
        if (currentWord.length() > longestWord.length()) {
            longestWord = currentWord;
        }
    }

    cout << "Cantidad de palabras: " << count << endl;
    cout << "Palabra mas larga: " << longestWord << endl;

    return 0;
}