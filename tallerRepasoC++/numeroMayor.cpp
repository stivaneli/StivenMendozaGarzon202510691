#include<iostream>
using namespace std;

int main(){
    int firstNumber;
    int secondNumber;

    cout<<"Ingrese el primer numero: ";
    cin>>firstNumber;
    cout<<"Ingrese el segundo numero: ";
    cin>>secondNumber;


    if(firstNumber>secondNumber){
        cout<<"El numero mayor es: "<<firstNumber<<endl;
    } else if (secondNumber>firstNumber){
        cout<<"El numero mayor es: "<<secondNumber<<endl;
    } else {
        cout<<"Los numeros son iguales."<<endl;
    }
}