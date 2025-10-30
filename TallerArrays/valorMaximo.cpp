#include<iostream>
using namespace std;

void forWithArrays() {
    int numeros[6] = {34, 67, 23, 819, 133, 38};
    int valorMaximo = numeros[0];

    for (int i = 1; i < 6; i++) {
        if (numeros[i] > valorMaximo) {
            valorMaximo = numeros[i];
        }
    }

    cout << "El valor maximo en el arreglo es: " << valorMaximo << endl;
}
int main(){
    forWithArrays();
    return 0;
}