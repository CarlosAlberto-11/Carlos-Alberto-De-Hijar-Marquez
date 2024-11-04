#include <iostream>

using namespace std;

int main() {
    float celsius;

    cout << "Introduce la temperatura en grados Celsius: ";
    cin >> celsius;


    float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;


    float kelvin = celsius + 273.15f;

    cout << "Temperatura en Fahrenheit: " << fahrenheit << " F" << endl;
    cout << "Temperatura en Kelvin: " << kelvin << " K" << endl;

    return 0;
}
