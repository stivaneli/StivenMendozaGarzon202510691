#include<iostream>
using namespace std;

void forWithArrays (){
    float grades[5] = {4.5, 3.8, 4.2, 5.0, 4.7};
    float sum = 0.0;

    for (float grade : grades) {
        sum += grade;
    }

    float average = sum / 5;
    cout << "El promedio de las calificaciones es: " << average << endl;
}
int main(){
    forWithArrays();
    return 0;
}