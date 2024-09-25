#include <stdio.h>

int main() {
    float celsius;

    printf("Introduce la temperatura en grados Celsius: ");
    scanf("%f", &celsius); // Leer la temperatura en Celsius

    // Convertir a Fahrenheit
    float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    // Convertir a Kelvin
    float kelvin = celsius + 273.15f;

    printf("Temperatura en Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Temperatura en Kelvin: %.2f K\n", kelvin);

    return 0;
}
