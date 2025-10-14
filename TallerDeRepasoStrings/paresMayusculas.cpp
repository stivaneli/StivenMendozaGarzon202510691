#include<iostream>
using namespace std;

string par (const string &word) {
    string result;
    for (size_t i = 0; i < word.length(); ++i) {
        char c = word[i];
        if (i % 2 == 0) { 
            if (c >= 'a' && c <= 'z') {
                c = c - ('a' - 'A'); 
            }
        } else { 
            if (c >= 'A' && c <= 'Z') {
                c = c + ('a' - 'A'); 
            }
        }
        result += c;
    }
    return result;
}
int main() {
    string word;
    cout << "Ingrese una palabra: ";
    cin >> word;

    string result = par (word);
    cout << "Resultado: " << result << endl;

    return 0;
}

