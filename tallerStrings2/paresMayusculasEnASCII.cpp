#include<iostream>
using namespace std;

string par (const string &word) {
    string result;
    for (size_t i = 0; i < word.length(); ++i) {
        char c = word[i];
        if (i % 2 == 0) { 
            if (c >= 97 && c <= 122) {
                c = c - 32; 
            }
        } else { 
            if (c >= 65 && c <= 90) { 
                c = c + 32; 
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
