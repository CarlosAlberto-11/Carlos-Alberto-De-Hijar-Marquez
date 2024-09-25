#include <iostream>

using namespace std;

int main() {
    int anioNacimiento;
    int anioActual = 2024;

    cout << "Introduce tu año de nacimiento: ";
    cin >> anioNacimiento;

    int edad = anioActual - anioNacimiento;
    cout << "Tu edad es: " << edad << " años" << endl;

    return 0;
}
