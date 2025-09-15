#include <iostream>
using namespace std;

int mayorDeTres(int a, int b, int c) {
	if (a >= b && a >= c) {
		return a;
	} else if (b >= a && b >= c) {
		return b;
	} else {
		return c;
	}
}

int main() {
	int num1, num2, num3;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	cout << "Ingrese el tercer número: ";
	cin >> num3;

	int mayor = mayorDeTres(num1, num2, num3);
	cout << "El número mayor es: " << mayor << endl;
	return 0;
}
