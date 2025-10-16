#include<iostream>
using namespace std;

bool validatePassword(string password) {
    if (password.length() < 8) {
        return false; 
    }

    bool hasMay = false;
    bool hasMin = false;
    int count = 0;

    for (char c : password) {
        if (isupper(c)) {
            hasMay = true;
        } else if (islower(c)) {
            hasMin = true;
        } else if (c >= 33 && c <= 47) {
            count ++;
        }
    }

    return hasMay && hasMin && count >= 3;
}
int main() {
    string password;

    cout << "Ingrese una contraseña: ";
    getline(cin, password);

    if (validatePassword(password)) {
        cout << "La contraseña es válida." << endl;
    } else {
        cout << "La contraseña no es válida. Debe tener al menos 8 caracteres, una mayúscula, una minúscula y al menos 3 caracteres especiales." << endl;
    }

    return 0;
}

