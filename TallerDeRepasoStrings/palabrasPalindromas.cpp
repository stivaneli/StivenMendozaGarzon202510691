#include<iostream>
using namespace std;

bool isPalindrome(const string &word) {
    int left = 0;
    int right = word.length() - 1;
    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    string word1, word2;
    cout << "Ingrese la primera palabra: ";
    cin >> word1;
    cout << "Ingrese la segunda palabra: ";
    cin >> word2;

    if (isPalindrome(word1)) {
        cout << word1 << " es un palindromo." << endl;
    } else {
        cout << word1 << " no es un palindromo." << endl;
    }

    if (isPalindrome(word2)) {
        cout << word2 << " es un palindromo." << endl;
    } else {
        cout << word2 << " no es un palindromo." << endl;
    }

    return 0;
}
