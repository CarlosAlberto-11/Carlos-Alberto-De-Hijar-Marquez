#include <stdio.h>

int main() {
    int anioNacimiento;
    int anioActual = 2024;

    printf("Introduce tu año de nacimiento: ");
    scanf("%d", &anioNacimiento);

    int edad = anioActual - anioNacimiento;
    printf("Tu edad es: %d años\n", edad);

    return 0;
}
