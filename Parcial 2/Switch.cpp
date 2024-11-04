#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
     int punt;
    char repit,prom;
    do{
    cout << "Puntaje (0-10): " << endl;
    cin >> punt;
    switch(punt){
    case 10: prom='A';
    break;
    case 9: prom='A';
    break;
    case 8: prom='B';
    break;
    case 7: prom='C';
    break;
    case 6: prom='D';
    break;
    default: prom='F';
    break;
    }
    cout << "Tu Promedio es de: " << prom << endl;
    cout << "¿Desea repetir?: [S/N]" << endl;
    cin >> repit;
    }
    while(repit=='S'||repit=='s');
    return 0;
}
