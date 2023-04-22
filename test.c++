#include<iostream>
#include<locale>
#include <math.h>
#include <iomanip>

using namespace std;

//declaracion de variables
// variable casa es para almacenar la opcion que ingreso el usuario
//variable caso, es para saber con que detalles el cliente eligio la casa

float precio_final;
int estrato, plazo, casa, tipo, precio, jardin, piscina;
string nombre, dni;
float cuota_inicial, cuota_mensual, ingresos;

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
    
    if ((ingresos >=2300000 and ingresos <=3500000) and (estrato >=1 and estrato <=3) ){
    		cout<<"+-------+----------------+--------------+-------------------+--------------------+" <<endl;
	cout<<"|Número |Tipo de vivienda| En obra negra| Acabados sencillos| Acabados Especiales|" <<endl;
	cout<<"+-------+----------------+--------------+-------------------+--------------------+" <<endl;
	cout<<"|   1   |De   un   piso  | 75.000.000   |     85.000.000    |     90.000.000     |" <<endl;
	cout<<"|       |Colindante      |              |                   |                    |" <<endl;
	cout<<"+-------+----------------+--------------+-------------------+--------------------+" <<endl;
	cout<<"|   2   |De   dos   pisos| 85.000.000   |     95.000.000    |     100.000.000    |" <<endl;
	cout<<"|       |Colindante      |              |                   |                    |" <<endl;
	cout<<"+-------+----------------+--------------+-------------------+--------------------+" <<endl;	
	cout<<"|   3   |De   un   piso  | 80.000.000   |     90.000.000    |     95.000.000     |" <<endl;
	cout<<"|       |Esquinera       |              |                   |                    |" <<endl;
	cout<<"+-------+----------------+--------------+-------------------+--------------------+" <<endl;	
	cout<<"|   4   |De   dos   pisos| 90.000.000   |     100.000.000   |     105.000.000    |" <<endl;
	cout<<"|       |Esquinera       |              |                   |                    |" <<endl;
	cout<<"+-------+----------------+--------------+-------------------+--------------------+" <<endl;
	
    cout<<"Para seleccionar las caracteristicas de su casa digite el número que corresponde en la tabla a la caracteristica que se pide" <<endl;
    cout<<"Seleccione que tipo de casa quiere: "; cin>>casa;
    cout << "\x1B[2J\x1B[H" <<endl;


    cout<<"+----------------+--------------+-------------------+--------------------+" <<endl;
    cout<<"|     Número     |       1      |          2        |         3          |" <<endl;
	cout<<"+----------------+--------------+-------------------+--------------------+" <<endl;
    cout<<"|Tipo de vivienda| En obra negra| Acabados sencillos| Acabados Especiales|" <<endl;
	cout<<"+----------------+--------------+-------------------+--------------------+" <<endl;
	cout<<"|De   un   piso  | 75.000.000   |     85.000.000    |     90.000.000     |" <<endl;
	cout<<"|Colindante      |              |                   |                    |" <<endl;
	cout<<"+----------------+--------------+-------------------+--------------------+" <<endl;
	cout<<"|De   dos   pisos| 85.000.000   |     95.000.000    |     100.000.000    |" <<endl;
	cout<<"|Colindante      |              |                   |                    |" <<endl;
	cout<<"+----------------+--------------+-------------------+--------------------+" <<endl;	
	cout<<"|De   un   piso  | 80.000.000   |     90.000.000    |     95.000.000     |" <<endl;
	cout<<"|Esquinera       |              |                   |                    |" <<endl;
	cout<<"+----------------+--------------+-------------------+--------------------+" <<endl;	
	cout<<"|De   dos   pisos| 90.000.000   |     100.000.000   |     105.000.000    |" <<endl;
	cout<<"|Esquinera       |              |                   |                    |" <<endl;
	cout<<"+----------------+--------------+-------------------+--------------------+" <<endl;
    cout<<"Para seleccionar las caracteristicas de su casa digite el número que corresponde en la tabla a la caracteristica que se pide" <<endl;
    cout<<"Seleccione el tipo de acabado que desee: "; cin>>tipo;

    switch (casa){
    case 1:
        switch (tipo)
        {
        case 1:
            precio = 75000000;
            cout<<"Usted seleccionó una vivienda de un piso colindante en obra negra";
            break;
        case 2:
            precio = 85000000;
            cout<<"Usted seleccionó una vivienda de un piso colindante con acabados sencillos";
            break;
        case 3:
            precio = 90000000;
            cout<<"Usted seleccionó una vivienda de un piso colindante con acabados especiales";
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (tipo)
        {
        case 1:
            precio = 85000000;
            cout<<"Usted seleccionó una vivienda de dos pisos colindante en obra negra" <<endl;
            break;
        case 2:
            precio = 95000000;
            cout<<"Usted seleccionó una vivienda de dos pisos colindante con acabados sencillos"<<endl;
            break;
            
        case 3:
            precio = 100000000;
            cout<<"Usted seleccionó una vivienda de dos pisos colindante con acabados especiales"<<endl;
            break;
        default:
            break;
    }
    break;
    
    case 3:
        switch (tipo)
        {
        case 1:
            precio = 80000000;
            cout<<"Usted seleccionó una vivienda de un piso esquinera en obra negra" <<endl;
            break;
        case 2:
            precio = 90000000;
            cout<<"Usted seleccionó una vivienda de un piso esquinera con acabados sencillos"<<endl;
            break;
        case 3:
            precio = 95000000;
            cout<<"Usted seleccionó una vivienda de un piso esquinera con acabados especiales"<<endl;
            break;
        default:
            break;
        }
        break;
        
    case 4:
        switch (tipo)
        {
        case 1:
            precio = 90000000;
            cout<<"Usted seleccionó una vivienda de dos pisos esquinera en obra negra"<<endl;
            break;
        case 2:
            precio = 100000000;
            cout<<"Usted seleccionó una vivienda de dos pisos esquinera con acabados sencillos"<<endl;
            break;
        case 3:
            precio = 105000000;
            cout<<"Usted seleccionó una vivienda de dos pisos esquinera con acabados especiales"<<endl;
            break;
        default:
       	
            break;
        }
        break;

    default:
    
        break;
    }
    cout << "\x1B[2J\x1B[H" <<endl;
    
    if(casa == 3 || casa == 4 ){
        
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"| Tipo de jardin     |    Suma al precio total    |"<<endl;
        cout<<"--------------------------------------------------+ "<<endl;
        cout<<"| Jardin grande[1]   |        "<<fixed<<setprecision(1)<<(precio*0.15)<<"         |"<<endl;     
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"| Jardin pequeño [2] |        "<<fixed<<setprecision(1)<<(precio*0.10)<<"         |"<<endl;    
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"Elija que jardin quiere: ";
        cin>>jardin;
        
        if (jardin == 1 || jardin == 2 ){
            switch (jardin)
            {
            case 1:
                precio_final = precio*1.15;
                break;
            case 2:
                precio_final = precio*1.10;
		break;
            default:
                break;
            }

        }
        else{
            cout<<"incorrecto";
        }
    }

    cout<<fixed<<setprecision(1)<<precio_final;
    


    return 0;
	}
	
 else{
 	
cout<<"ERROR, usted ingresó un dato no valido o no cumple con los requisitos para comprar una casa con nosotros";
 }

}
