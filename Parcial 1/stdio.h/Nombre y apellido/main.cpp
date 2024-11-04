#include <stdio.h>

int main() {
    char nombre[50];
    char apellido[50];

    printf("Introduce tu nombre: ");
    scanf("%s", nombre);

    printf("Introduce tu apellido: ");
    scanf("%s", apellido);

    printf("Hola, %s %s!\n", nombre, apellido);

    return 0;
}
