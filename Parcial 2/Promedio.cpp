#include <stdio.h>
#include <conio.h>


int main(int argc, char const *argv[])
{
    /* code */
     float cal1,cal2,cal3,prom;
    printf("Inserte su Primera Calificacion: "); scanf("%f",&cal1);
    printf("Inserte su Segunda Calificacion: "); scanf("%f",&cal2);
    printf("Inserte su Tercera Calificacion: "); scanf("%f",&cal3);

    prom=(cal1+cal2+cal3)/3;
    if(prom>=7){
           printf("\nAPROBADO");
    }
    else{
            printf("\nREPROBADO >:(");
    
    }

    getch();
    return 0;
}

