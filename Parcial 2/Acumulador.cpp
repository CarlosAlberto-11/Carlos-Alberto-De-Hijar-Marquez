/*DOUBLE*/
#include <stdio.h>
#include <iostream>
int main(int argc, char const *argv[])
{
    /* code */
    double num,suma,pro;
    num=0;
    pro=1;

    printf("Escribe un Num diferente de 0: "); scanf("%lf", &num);
    if(num!=0){
        while(pro++){
            printf("\nEscribe un Num diferente de 0: "); scanf("%lf",&pro);
            suma= (num+pro)+suma;
            printf("La suma es: %.2lf\n", suma);
            num=0;
        }
        if(pro!=0){
            printf("\nFIN");
        }
    }
    else{
        printf("\nFIN");
    }
    return 0;
}
