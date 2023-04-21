#include<iostream>
#include<stdlib.h>
#include<locale>
using namespace std;


int estrato, plazo, tipo_vivienda;
string nombre, dni;
float cuota_inicial, cuota_mensual, precio, ingresos;

int main()
{
	system( "Title Programa de Gestion de ventas MY HOME" );
	setlocale(LC_ALL, "spanish");
	system("Color f0");
	cout<<"                                                                                          " <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                                             Bienvenid@ a MY HOME                         "<<endl<<endl;
    cout<<"                                   Presione la tecla Enter para continuar                 "<<endl;
    cin.get();
    cout << "\x1B[2J\x1B[H" <<endl;
    cout<<"Ingrese su DNI: ";
    getline(cin, dni);
    cout<<endl<<"Ingrese su nombre: ";
    getline(cin, nombre);
    cout<<endl<<"Digite los ingresos de su circulo familiar cercano: ";
    cin>>ingresos;
    cout<<endl<<"Digite su estrato: ";
    cin>>estrato;
    cout << "\x1B[2J\x1B[H" <<endl; 
	cout<<"+------+----------------+--------------+-------------------+--------------------+" <<endl;
	cout<<"|      |                |      1       |        2          |          3         |" <<endl;
	cout<<"+------+----------------+--------------+-------------------+--------------------+" <<endl;
	cout<<"|      |Tipo de vivienda| En obra negra| Acabados sencillos| Acabados Especiales|" <<endl;
	cout<<"+------+----------------+--------------+-------------------+--------------------+" <<endl;
	cout<<"|  1   |De   un   piso  | 75.000.000   |     85.000.000    |     90.000.000     |" <<endl;
	cout<<"|      |Colindante      |              |                   |                    |" <<endl;
	cout<<"+------+----------------+--------------+-------------------+--------------------+" <<endl;
	cout<<"|  2   |De   dos   pisos| 85.000.000   |     95.000.000    |     100.000.000    |" <<endl;
	cout<<"|      |Colindante      |              |                   |                    |" <<endl;
	cout<<"+------+----------------+--------------+-------------------+--------------------+" <<endl;	
	cout<<"|  3   |De   un   piso  | 80.000.000   |     90.000.000    |     95.000.000     |" <<endl;
	cout<<"|      |Esquinera       |              |                   |                    |" <<endl;
	cout<<"+------+----------------+--------------+-------------------+--------------------+" <<endl;	
	cout<<"|  4   |De   dos   pisos| 90.000.000   |     100.000.000   |     105.000.000    |" <<endl;
	cout<<"|      |Esquinera       |              |                   |                    |" <<endl;
	cout<<"+------+----------------+--------------+-------------------+--------------------+" <<endl;

 
    
    return 0;
}
