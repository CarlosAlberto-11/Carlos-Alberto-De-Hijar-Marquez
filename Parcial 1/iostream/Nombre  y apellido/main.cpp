#include <iostream>

using namespace std;

int main() {
    string nombre;
    string apellido;

    cout << "Introduce tu nombre: ";
    cin >> nombre; // Leer el nombre

    cout << "Introduce tu apellido: ";
    cin >> apellido; // Leer el apellido

    cout << "Hola, " << nombre << " " << apellido << "!" << endl;

    return 0;
}
