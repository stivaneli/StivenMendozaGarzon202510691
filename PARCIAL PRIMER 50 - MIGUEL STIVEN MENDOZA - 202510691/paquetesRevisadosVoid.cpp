#include <iostream>
using namespace std;

void checkPackages(int n) {
    cout << "Paquetes revisados: ";
    if (n % 2 == 0) { 
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
    } else { // 
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de paquetes: ";
    cin >> n;

    checkPackages(n);
    return 0;
}