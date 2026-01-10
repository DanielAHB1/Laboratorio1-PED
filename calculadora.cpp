#include <iostream>
using namespace std;

int main(){
    int x1, x2, op, res;

    cout<<"Bienvenido, elige la operacion que quieres realizar "<< endl;
    cout<<"1. Multiplicacion "<< endl;
    cout<<"2. Division "<< endl;
    cout<<"3. Suma "<< endl;
    cout<<"4. Resta "<< endl;
    cout<<"Su opcion es: "; 
    cin >> op;

    switch (op)
    {
    case 1:
        cout<<"Ingresa los numero que quieres multiplicar "<< endl;
        cout<<"Primer numero: ";
        cin >> x1;
        cout<<"Segundo numero: ";
        cin >> x2;
        res= x1*x2;
        cout<<"La multiplicacion es: "<< res<< endl;
        break;

    case 2:
        cout<<"Ingresa los numero que quieres dividir: "<< endl;
        cout<<"Primer numero: ";
        cin >> x1;
        cout<<"Segundo numero: ";
        cin >> x2;
        if (x2 > 0)
        {
            res= x1/x2;
            cout<<"El resultado de la division es: "<< res<< endl;
        }
        else
        {
            cout<<"El segundo numero es 0, por lo tanto la respuesta es indefinida"<< endl;
        }
        break;

     default:
        cout<<"Opcion elegida no valida";
        return 0;

    }
    cout<<"Calculos terminados";
    return 0;
}