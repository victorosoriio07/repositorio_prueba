#include <iostream>

using namespace std;

int main (){
int n1, n2, resultado, opcion;

cout <<"=====Bienvenido a la Calculadora, elija una opcion=====" << endl; 
cout <<"1.suma" << endl;
cout <<"2.resta" << endl;
cout <<"3.Multiplicacion" << endl;
cout <<"4.Division" << endl;
cin >> opcion;

switch (opcion){
    case 1: {
        cout <<"Ingrese los numeros con los que desea sumar" << endl;
        cin >> n1,n2;

        resultado = n1+n2;

        cout << "El resultado es:" << resultado << endl;
        break;
    }
      case 2: {
        cout <<"Ingrese los numeros con los que desea resta" << endl;
        cin >> n1,n2;

        resultado = n1-n2;

        cout << "El resultado es:" << resultado << endl;
        break;
    }
}



 return 0;   
}