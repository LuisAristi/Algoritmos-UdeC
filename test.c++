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
    cout<<"Bienvenid@ a MY HOME"<<endl<<endl;
    system("read");
    system("clear");
    cout<<"ingrese su dni ";
    getline(cin, dni);
    cout<<endl<<"ingrese su nombre ";
    getline(cin, nombre);
    cout<<endl<<"Digite los ingresos de su circulo familiar cercano ";
    cin>>ingresos;
    cout<<endl<<"Digite su estrato";
    cin>>estrato;
    
    return 0;
}
