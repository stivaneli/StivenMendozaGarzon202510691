#include<iostream>
using namespace std;

void forWithArrays() {
    string employees[4] = {"ramon", "felipe", "yahaira", "gustavo"};
    
    cout << "Nombres de los empleados:" << endl;
    for (const string& name : employees) {
        cout << name << endl;
    }
}
int main(){
    forWithArrays();
    return 0;
}
