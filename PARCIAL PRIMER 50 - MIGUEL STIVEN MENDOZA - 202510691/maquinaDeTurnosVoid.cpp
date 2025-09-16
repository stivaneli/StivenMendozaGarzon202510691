#include <iostream>
using namespace std;

void showShifts(int start, int end) {
    if (start > end) {
        cout << "Error: el turno inicial no puede ser mayor que el final." << endl;
        return;
    }

    cout << "La máquina trabajó en los turnos:" << endl;
    int i = start;
    while (i <= end) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Ingrese el turno inicial: ";
    cin >> start;
    cout << "Ingrese el turno final: ";
    cin >> end;

    showShifts(start, end);
    return 0;
}