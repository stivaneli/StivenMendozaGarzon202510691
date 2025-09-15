#include <iostream>
using namespace std;

void contarDescendente(int number) {
	int i = number;
	while (i >= 0) {
		cout << i << " ";
		i--;
	}
	cout << endl;
}

void contarAscendente(int number) {
	int i = 0;
	while (i <= number) {
		cout << i << " ";
		i++;
	}
	cout << endl;
}

int main() {
	int num;
	cout << "Ingrese un número: ";
	cin >> num;
	cout << "Conteo descendente: ";
	contarDescendente(num);
	cout << "Conteo ascendente: ";
	contarAscendente(num);
	return 0;
}
