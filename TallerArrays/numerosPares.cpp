#include<iostream>
using namespace std;

void forWithArrays() {
    int values[8] = {12, 28, 89, 45, 78, 34, 23, 90};
    int evenCount = 0;

    for (size_t i = 0; i < 8; ++i) {
        if (values[i] % 2 == 0) {
            evenCount++;
        }
    }

    cout << "Cantidad de numeros pares en el arreglo: " << evenCount << endl;
}
int main(){
    forWithArrays();
    return 0;
}