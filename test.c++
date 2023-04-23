#include<iostream>
#include<locale>
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
        switch (tipo){
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
            sleep(1); exit(0);}
        break;
    case 2:
        casa_tipo = "De dos pisos colindante";
        switch (tipo){
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
        	cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl; sleep(1); exit(0);}
    break;
    case 3:
        casa_tipo = "De un piso esquinera";
        switch (tipo){
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
         cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl; sleep(1); exit(0);
            break;}
        break;
    case 4:
        casa_tipo = "De dos pisos esquinera";
        switch (tipo){
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
       		 cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl; sleep(1); exit(0);
            break;}
        break;
    default:
        cout<<"Tipo de casa no valida, seleccione un valor valido"<<endl; sleep(1); exit(0);
        break;}
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
        break;}
    if(casa == 1 or casa ==2){ jardin_op = "no tiene"; piscina_op = "notiene";}
    else{
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"| Tipo de jardin     |    Suma al precio total    |"<<endl;
        cout<<"+--------------------+----------------------------+"<<endl;
        cout<<"| Jardin grande[1]   |        "<<fixed<<setprecision(1)<<(precio*0.15)<<"         |"<<endl;
        cout<<"+--------------------+----------------------------+"<<endl;     
        cout<<"| Jardin pequeño [2] |        "<<fixed<<setprecision(1)<<(precio*0.10)<<"         |"<<endl;    
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"Elija que jardin quiere: "; cin>>adiciones;
        switch (adiciones){
            case 1:
                jardin_op = "jardin grande"; precio_final = precio*0.15;
                break;
            case 2:
                jardin_op = "jardin pequeno"; precio_final = precio*0.10;
                break;
            default:
                cout<<"incorrecto, digite una opcion correcta"; sleep(1); exit(0);
                break;}
        cout << "\x1B[2J\x1B[H" <<endl;
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"|      Opción        |     Suma al precio total   |"<<endl;
        cout<<"+--------------------+----------------------------+"<<endl;
        cout<<"|    Con vista a la  |        "<<fixed<<setprecision(1)<<(precio*0.05)<<"         |"<<endl;
        cout<<"|    piscina[1]      |                            |"<<endl;     
        cout<<"+--------------------+----------------------------+"<<endl;
        cout<<"|    Sin vista a la  |                            |"<<endl;
        cout<<"|    piscina[2]      |           0                |"<<endl;    
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"¿Desea tener vista a la piscina (1 o 2)?"<<endl; cin>>adiciones;  
        switch (adiciones){
            case 1:
                piscina_op = "con vista a la piscina"; precio_final += precio*0.05;
                break;
            case 2:
                piscina_op = "sin vista a la piscina";
                break;
            default:
                cout<<"incorrecto, digite una opcion correcta"; sleep(1); exit(0);}
    }
    cout << "\x1B[2J\x1B[H" <<endl;
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|      Opción         |     Suma al precio total   |"<<endl;
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"| Sin parqueadero [0] |             0              |"<<endl;
    cout<<"+---------------------+----------------------------+"<<endl;     
    cout<<"|  Un parqueadero [1] |         3.000.000          |"<<endl;    
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|Dos parqueaderos [2] |         6.000.000          |"<<endl;    
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"Elija como desea el parqueadero(0, 1 o 2): "; cin>>adiciones;
	switch(adiciones){
	    case 0:
            parqueadero_op = "sin parqueadero"; 
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
        default:
            cout<<"incorrecto, digite una opcion correcta"; sleep(1); exit(0);
            break;
	}   
    saldo = precio_final - cuota_inicial;
    cuota_inicial = cuota_inicial - descuento;
    cout << "\x1B[2J\x1B[H" <<endl; 
	cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|      Opción         |  Valor de la cuota mensual |"<<endl;
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|     5 años [0]      |         "<<fixed<<setprecision(1)<<saldo/60<<"       |"<<endl;     
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|     7 años [1]      |         "<<fixed<<setprecision(1)<<saldo/84<<"          |"<<endl;    
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|    10 años [2]      |         "<<fixed<<setprecision(1)<<saldo/120<<"           |"<<endl;    
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"seleccione como quiere que sea el plazo (0, 1 o 2) "; cin>>adiciones;
    
    switch (adiciones){
    case 0:
        adiciones = 5; cuota_mensual = saldo/60;
        break;
    case 1: 
        adiciones = 7; cuota_mensual = saldo/84;
        break;
    case 2:
        adiciones = 10; cuota_mensual = saldo/120;
        break;
    default:
        cout<<"incorrecto, digite una opcion correcta wtf"; sleep(1); exit(0);
        break;}
    cout << "\x1B[2J\x1B[H" <<endl; 
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"| Nombre  del cliente |    "<<nombre<<"          |"<<endl;
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|Documento de identidad|      "<<dni<<"           |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|      Estrato        |          "<<estrato<<"                 |"<<endl;
    cout<<"----------------------+----------------------------+" <<endl;
    cout<<"|      Ingresos       |    "<<fixed<<setprecision(1)<<ingresos<<"       |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|   Casa a comprar    |   "<<casa_tipo<<" |"<<endl;
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|      Acabados       |  "<<acabado<<"        |"<<endl;
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|      Jardin         |   "<<jardin_op<<"        |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"| Vista a la piscina  |    "<<piscina_op<< "  |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|     Parqueadero     |    "<<parqueadero_op<<"      |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl; 
    cout<<"|   Precio de venta   |       "      <<fixed<<setprecision(1)<<precio_final<<  "          |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|    Cuota inicial    |       "     <<fixed<<setprecision(1)<<cuota_inicial<< "           |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|        Saldo        |    "    <<fixed<<setprecision(1)<<saldo<< "         |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|    Cuota mensual    |      "<<fixed<<setprecision(1)<<cuota_mensual<< "             |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|        Plazo        |           "<<adiciones<< " años           |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"| Cantidad de cuotas  |     "<<adiciones*12<< " cuotas mensuales   |"<<endl;
    cout<<"|     mensuales       |                            |"<<endl;
    cout<<"+---------------------+----------------------------+ "<<endl;
    }
    else cout<<"ERROR, usted ingresó un dato no valido o no cumple con los requisitos para comprar una casa con nosotros"; exit(0); sleep(1);
    return 0;
}
