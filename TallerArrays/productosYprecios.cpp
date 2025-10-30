#include<iostream>
using namespace std;

void forWithArrays() {
    string products[3] = {"pan", "leche", "queso"};
    float prices[3] = {1500, 3200, 4800};

    cout << "Productos y sus precios:" << endl;
    for (size_t i = 0; i < 3; ++i) {
        cout << "Producto: " << products[i] << ", Precio: $" << prices[i] << endl;
    }
}
int main(){
    forWithArrays();
    return 0;
}