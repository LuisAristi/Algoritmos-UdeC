#include<iostream>
#include<stdlib.h>
#include<locale>
using namespace std;

int piso_colindante = 75000000; 
int estrato, plazo;
string nombre, dni;
float cuota_inicial, cuota_mensual, precio, ingresos;

int main()
{
	system( "Title Programa de Gestion de ventas MY HOME" );
    cout<<"Bienvenid@ a MY HOME"<<endl<<endl;
    cout<<"Presione la tecla Enter para continuar"<<endl;
    cin.get();
    cout << "\x1B[2J\x1B[H" <<endl;
    cout<<"ingrese su dni: ";
    getline(cin, dni);
    cout<<endl<<"ingrese su nombre: ";
    getline(cin, nombre);
    cout<<endl<<"Digite los ingresos de su circulo familiar cercano: ";
    cin>>ingresos;
    cout<<endl<<"Digite su estrato: ";
    cin>>estrato;
    
    return 0;
}
