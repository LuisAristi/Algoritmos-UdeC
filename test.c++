#include<locale>
#include<iostream>
#include<stdlib.h>

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
	cout<<"+------+----------------+--------------+-------------------+--------------------+" <<endl <<endl;
	cout<<"Para elegir un tipo de casa debe digitar los digitos correspondientes a cada caracteristica (va primero el tipo de casa, luego el acabado)" <<endl;
	cout<<"Por ejemplo, si desea una casa de 1 piso colindante con acabados sencillos digite el número 12" <<endl <<endl;
	cout<<"Elija el tipo de vivienda de su preferencia: ";
	cin>>tipo_vivienda;
	     if(tipo_vivienda<=11 or tipo_vivienda>=43){
	     	cout<<"ERROR, Escriba un digito valido para seleccionar la vivienda";
             }
  
        else if((tipo_vivienda>=14 and tipo_vivienda <=20) or (tipo_vivienda>=24 and tipo_vivienda <=30) or (tipo_vivienda>=34 and tipo_vivienda <=40))	
             cout<<"ERROR, Escriba un digito valido para seleccionar la vivienda";
             
        else{
        switch (tipo_vivienda){
         case 11:
		 
		 case 12:
		 
		 case 13:
		 
		 case 21:
		 
		 case 22:
		 
		 case 23:
		 
		 case 31:	
		 
		 case 32:	
		 
		 case 33:
		 
		 case 41:
		 
		 case 42:
		 
		 case 43:				
        	
		}	
        	
		}
