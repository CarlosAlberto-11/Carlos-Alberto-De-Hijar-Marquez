#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int opc;
    float num1,num2,res;
    printf("==CALCULADORA==");
    printf("\n[1]Suma\n[2]Resta\n[3]Multiplicacion\n[4]Division");
    printf("\n\nInserte el Numero 1: "); scanf("%f",&num1);
    printf("\nInserte el Numero 2: "); scanf("%f",&num2);
    printf("\n\nInserte la opcion: "); scanf("%d",&opc);
    switch(opc){
        case 1:
            res=num1+num2;
            printf("Resultado: %.2f",res);
        break;
        case 2:
            res=num1-num2;
            printf("Resultado: %.2f",res);
        break;
        case 3:
            res=num1*num2;
            printf("Resultado: %.2f",res);
        break;
        case 4:
            res=num1/num2;
            printf("Resultado: %.2f",res);
        break;
    }
    getch();
}
