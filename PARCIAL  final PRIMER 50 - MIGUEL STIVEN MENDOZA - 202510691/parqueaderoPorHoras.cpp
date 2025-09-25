#include<iostream>
using namespace std;

int calculateTotal(int hours, int rate) {
    return hours * rate;
}

void printInVoice(int hours, int rate, string plate)
{
    int total = calculateTotal(hours, rate);
    cout << "Placa: " << plate << endl;
    cout << "Horas: " << hours << endl;
    cout << "Tarifa: " << rate << endl;
}

int main()
{
    int hours, rate;
    string plate;

    cout << "Ingrese la placa del vehiculo: ";
    cin >> plate;
    cout << "Ingrese la cantidad de horas: ";
    cin >> hours;
    cout << "Ingrese la tarifa por hora: ";
    cin >> rate;

    printInVoice(hours, rate, plate);
    cout << "Total a pagar: " << calculateTotal(hours, rate) << endl;

    return 0;
}