/*Multi for*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int num,x,multi;
    cout<<"ingrese un numero: "<< endl;
    cin >> num;

    for(x=1;x<=10;x++){
        multi=num*x;
        cout<< num<< "x" << x << "= "<< multi << endl;
    }
    return 0;
}
