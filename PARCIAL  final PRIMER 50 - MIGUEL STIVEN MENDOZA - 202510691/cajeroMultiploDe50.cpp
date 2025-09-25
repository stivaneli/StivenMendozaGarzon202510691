#include<iostream>
using namespace std;

int isValidAmount(int amount) {
    return (amount % 50 == 0);
}

int dispenseBills(int amount, int &bills50, int &bills100, int &bills200) {
    if (!isValidAmount(amount)) {
        return -1; // Monto no valido
    }
    bills200 = amount / 200;
    amount %= 200;
    bills100 = amount / 100;
    amount %= 100;
    bills50 = amount / 50;
    return 0; // Exito
}

int main() {
    int amount, bills50 = 0, bills100 = 0, bills200 = 0;

    cout << "Ingrese el monto a retirar : ";
    cin >> amount;

    if (dispenseBills(amount, bills50, bills100, bills200) == -1) {
        cout << "Monto no valido. Debe ser multiplo de 50." << endl;
    } else {
        cout << "Desglose de billetes:" << endl;
        cout << "Billetes de 200: " << bills200 << endl;
        cout << "Billetes de 100: " << bills100 << endl;
        cout << "Billetes de 50: " << bills50 << endl;
    }

    return 0;


}
