#include<iostream>
#include<locale>
#include <math.h>
#include <iomanip>
#include <unistd.h>

using namespace std;

//declaracion de variables
// variable casa es para almacenar la opcion que ingreso el usuario
//variable caso, es para saber con que detalles el cliente eligio la casa

float precio_final;
int estrato, casa, tipo, precio, adiciones, dni;
string nombre = " ", casa_tipo, acabado, jardin_op, piscina_op, parqueadero_op;
float saldo, cuota_inicial, cuota_mensual, ingresos, descuento = 0;

int main(){
	system( "Title Programa de Gestion de ventas MY HOME" ); 
	setlocale(LC_ALL, "spanish");
	system("Color f0");
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                                             Bienvenid@ a MY HOME                         "<<endl<<endl;
    cout<<"                                   Presione la tecla Enter para continuar                 "<<endl;
    cin.get();
    cout << "\x1B[2J\x1B[H" <<endl;
    cout<<"Ingrese su DNI: ";
    cin>>dni;
    cout<<endl<<"Ingrese su nombre: ";
    fflush(stdin); getline(cin, nombre);
    cout<<endl<<"Digite los ingresos de su circulo familiar cercano: ";
    cin>>ingresos;
    cout<<endl<<"Digite su estrato: ";
    cin>>estrato;
    cout << "\x1B[2J\x1B[H" <<endl; 
    
    if ((ingresos >=2300000 and ingresos <=3500000) and (estrato >=1 and estrato <=3) and (dni>0)){
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
    cout << "\x1B[2J\x1B[H" <<endl;
    switch (casa){
    case 1:
        casa_tipo = "De un piso colindante";
        jardin_op = "no tiene";
        piscina_op = "notiene";
        switch (tipo)
        {
        case 1:
            precio_final = 75000000;
            cout<<"Usted seleccionó una vivienda de un piso colindante en obra negra";
            break;
        case 2:
            precio_final = 85000000;
            cout<<"Usted seleccionó una vivienda de un piso colindante con acabados sencillos";
            break;
        case 3:
            precio_final = 90000000;
            cout<<"Usted seleccionó una vivienda de un piso colindante con acabados especiales";
            break;
        default:
         cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl;
            sleep(1);
            exit(0);
        }
        break;
    case 2:
        jardin_op = "no tiene";
        piscina_op = "notiene";
        casa_tipo = "De dos pisos colindante";
        switch (tipo)
        {
        case 1:
            precio_final = 85000000;
            cout<<"Usted seleccionó una vivienda de dos pisos colindante en obra negra" <<endl;
            break;
        case 2:
            precio_final = 95000000;
            cout<<"Usted seleccionó una vivienda de dos pisos colindante con acabados sencillos"<<endl;
            break;
            
        case 3:
            precio_final = 100000000;
            cout<<"Usted seleccionó una vivienda de dos pisos colindante con acabados especiales"<<endl;
            break;
        default:
        	 cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl;
            sleep(1);
            exit(0);
    }
    break;
    
    case 3:
        casa_tipo = "De un piso esquinera";
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
         cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl;
            sleep(1);
            exit(0);
            break;
        }
        break;
        
    case 4:
        casa_tipo = "De dos pisos esquinera";
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
       		 cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl;
            sleep(1);
            exit(0);
            break;
        }
        break;

    default:
            cout<<"Tipo de casa no valida, seleccione un valor valido"<<endl;
        sleep(1);
        exit(0);
        break;
    }
    switch (tipo){
    case 1:
        acabado = "obra negra";
        break;
    case 2:
        acabado = "acabados simples";
        break;
    case 3:
        acabado = "acabados especiales";
        break;
    default:
        break;
    }
    sleep(3);
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
        cin>>adiciones;
        
        if (adiciones == 1 || adiciones == 2 ){
            switch (adiciones)
            {
            case 1:
                jardin_op = "jardin grande";
                precio_final = precio*1.15;
                break;
            case 2:
                jardin_op = "jardin pequeno";
                precio_final = precio*1.10;
                break;
            default:
                break;
            }

        }
        else{
            cout<<"Incorrecto, digite una opción correcta";
            sleep(1);
            exit(0);
        }
        cout << "\x1B[2J\x1B[H" <<endl;
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"|      Opción        |     Suma al precio total   |"<<endl;
        cout<<"--------------------------------------------------+ "<<endl;
        cout<<"|    Con vista a la  |        "<<fixed<<setprecision(1)<<(precio*0.05)<<"         |"<<endl;
        cout<<"|    piscina[1]      |                            |"<<endl;     
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"|    Sin vista a la  |                            |"<<endl;
        cout<<"|    piscina[2]      |           0                |"<<endl;    
        cout<<"+-------------------------------------------------+"<<endl;

        cout<<"¿Desea tener vista a la piscina (1 o 2)?"<<endl;
        cin>>adiciones;   
        
        if (adiciones == 1 || adiciones == 2 ){
            switch (adiciones){
                case 1:
                    piscina_op = "con vista a la piscina";
                    precio_final += precio*0.05;
                    break;
                case 2:
                    piscina_op = "sin vista a la piscina";
                    precio_final += 0;
                    break;
                default:
                    break;
                    }
            }
        else{
            cout<<"incorrecto, digite una opcion correcta";
            sleep(1);
            exit(0);
        }
      cout << "\x1B[2J\x1B[H" <<endl;
      cout<<precio_final;
      sleep (1);
    }
 
        cout<<"+---------------------+----------------------------+"<<endl;
        cout<<"|      Opción         |     Suma al precio total   |"<<endl;
        cout<<"----------------------+----------------------------+ "<<endl;
        cout<<"| Sin parqueadero [0] |            0               |"<<endl;     
        cout<<"+---------------------+----------------------------+"<<endl;
        cout<<"|  Un parqueadero [1] |         3.000.000          |"<<endl;    
        cout<<"+---------------------+----------------------------+"<<endl;
        cout<<"| Dos parqueaderos [2]|         6.000.000          |"<<endl;    
        cout<<"+---------------------+----------------------------+"<<endl;
        cout<<"Elija como desea el parqueadero(0, 1 o 2): "; cin>>adiciones;
		
		switch(adiciones){
		case 0:
        parqueadero_op = "sin parqueadero";
		precio_final += 0;
        break;
		
		case 1:
        parqueadero_op = "un parqueadero";
		precio_final += 3000000;
        break;
        
        case 2:
        parqueadero_op = "dos parqueaderos";
		precio_final += 6000000;
        cuota_inicial = precio_final*0.3;
        descuento = cuota_inicial*0.1;
        break; 
		}   

	cuota_inicial = precio_final*0.3;	
	saldo = precio_final - cuota_inicial;
    cuota_inicial = cuota_inicial-descuento;


    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|      Opción         |  valor de la cuota mensual |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"| 5 anos [0]          |         "<<fixed<<setprecision(1)<<saldo/60<<"       |"<<endl;     
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"| 7 anos [1]          |         "<<fixed<<setprecision(1)<<saldo/84<<"          |"<<endl;    
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"| 10 anos [2]         |         "<<fixed<<setprecision(1)<<saldo/120<<"           |"<<endl;    
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"seleccione como quiere que sea el plazo (0, 1 o 2)";
    cin>>adiciones;
    
    if(adiciones == 0 || adiciones == 1 || adiciones == 2){
        switch (adiciones){
        case 0:
            adiciones = 5;
            cuota_mensual = saldo/60;
            break;
        case 1: 
            adiciones = 7;
            cuota_mensual = saldo/84;
            break;
        case 2:
            adiciones = 10;
            cuota_mensual = saldo/120;
        default:
            break;
        }
    }
    else{
        cout<<"digite una opcion correcta"; 
        sleep(2); 
        exit(0);
        }
    cout << "\x1B[2J\x1B[H" <<endl; 
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|   nombre cliente    |    "<<nombre<<"          |"<<endl;
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|documentode identidad|      "<<dni<<"           |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|      ingresos       |    "<<fixed<<setprecision(1)<<ingresos<<"       |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|   casa a comprar    |   "<<casa_tipo<<" |"<<endl;
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|      acabados       |  "<<acabado<<"  |"<<endl;
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|      jardin         |   "<<jardin_op<<"        |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"| vista a la piscina  |    "<<piscina_op<< " |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|     parqueadero     |    "<<parqueadero_op<<" |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|   precio de venta   | "<<fixed<<setprecision(1)<<precio_final<<  "|"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|    cuota inicial    | "<<fixed<<setprecision(1)<<cuota_inicial<< " |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|        saldo        | "<<fixed<<setprecision(1)<<saldo<< " |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|    cuota mensual    | "<<fixed<<setprecision(1)<<cuota_mensual<< " |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|        plazo        | "<<adiciones<< " anos|"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    }
    else cout<<"ERROR, usted ingresó un dato no valido o no cumple con los requisitos para comprar una casa con nosotros"; exit(0); sleep(1); return 0;
    return 0;
}
