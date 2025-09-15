#include <iostream>
using namespace std;

int main() {
	string nombre;
	int edad;
	double estatura;

	cout << "Ingrese su nombre: ";
	cin >> nombre;

	cout << "Ingrese su edad: ";
	cin >> edad;

	cout << "Ingrese su estatura en metros: ";
	cin >> estatura;

	cout << "Hola " << nombre << ", tienes " << edad << " años y mides " << estatura << " metros" << endl;

	return 0;
}
