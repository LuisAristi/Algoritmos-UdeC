//Trabajo de Luis Aristizabal y Juan Polo

#include<iostream>
#include<locale>
#include <math.h>
#include <iomanip>
#include <unistd.h>

using namespace std;

//Declaracion de variables
//Aqui es donde se almacenaran las variables que nos permitiran resolver el problema 

int estrato, plazo, casa, tipo, precio, jardin, piscina, parqueadero, dni, financiacion, cant_cuotas;
string nombre = "  ", casa_tipo, acabado, jardin_op, piscina_op, parqueadero_op;
float precio_final, saldo, cuota_inicial, cuota_mensual, ingresos, descuento;

int main(){
	system( "Title Programa de Gestion de ventas MY HOME" ); 
	setlocale(LC_ALL, "spanish");
	system("Color f0"); //las funciones system le dan un mejor apartado visual al programa y la funcion setlocale nos permite colocar letras propias del lenguaje español 
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"                                             Bienvenid@ a MY HOME                         "<<endl<<endl;
    cout<<"                                   Presione la tecla Enter para continuar                 "<<endl;
    cin.get();
    cout << "\x1B[2J\x1B[H" <<endl; //este cout es especial ya que funciona como si cargara otra página, haciendo que la interacción del usuario con la interfaz sea más agradable
    
	cout<<"Ingrese su DNI: "; cin>>dni; //Aqui interactuamos con el usuario para solicitar datos como su nombre, dni, estrato social e ingresos
    cout<<endl<<"Ingrese su nombre: "; fflush(stdin); getline(cin, nombre);
    cout<<endl<<"Digite los ingresos de su circulo familiar cercano: "; cin>>ingresos;
    cout<<endl<<"Digite su estrato: "; cin>>estrato; 
    cout << "\x1B[2J\x1B[H" <<endl; 
    
    //El problema plantea que el usuario debe cumplir ciertos requisitos en base a su ingreso y estrato, sino los cumple no puede realizar la compra, entonces este if lo usamos para eso
    //El dni es un numero que siempre es mayor a 0, si se ingresa un numero menor o igual a 0 sería un dato invalido
    //Si alguna condición no se cumple 
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
	cout<<"+-------+----------------+--------------+-------------------+--------------------+" <<endl <<endl;
    cout<<"Para seleccionar las caracteristicas de su casa digite el número que corresponde en la tabla a la caracteristica que se pide" <<endl;
    cout<<"Seleccione que tipo de casa quiere: "; cin>>casa;//Interacción con el usuario para que elija el tipo de casa en base a la tabla
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
    cout<<"Seleccione el tipo de acabado que desee: "; cin>>tipo;//Interacción con el usuario para que elija el tipo de acabado en base a la tabla
    cout << "\x1B[2J\x1B[H" <<endl;
    
    //Este switch evalua el tipo de casa que eligió el usuario, dependiendo de cual elija se activará el caso correspondiente
    switch (casa){
    case 1:
        casa_tipo = "De un piso colindante"; //Se almacena en la variable casa_tipo la cual es string para mostrarsela al usuario al final del programa
        switch (tipo) //Este switch evalua el tipo de acabado que eligió el usuario, dependiendo de cual eligió se afectará la variable precio_final y mostrara un mensaje que dice cual casa y acabado seleccionó        
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
        default: //El caso default ocurrirá cuando el usuario digite una opcion diferente las que se les pide, ocasionando un error, entonces se le avisará al usuario y se cerrará el programa
         cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl;
            sleep(1); exit(0);
        }
        break;
    case 2:
        casa_tipo = "De dos pisos colindante"; //Se almacena en la variable casa_tipo la cual es string para mostrarsela al usuario al final del programa
        switch (tipo) //Este switch evalua el tipo de acabado que eligió el usuario, dependiendo de cual eligió se afectará la variable precio_final y mostrara un mensaje que dice cual casa y acabado seleccionó
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
        default: //El caso default ocurrirá cuando el usuario digite una opcion diferente las que se les pide, ocasionando un error, entonces se le avisará al usuario y se cerrará el programa
        	 cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl; 
            sleep(1); exit(0);
        }
    break;
    
    case 3:
        casa_tipo = "De un piso esquinera"; //Se almacena en la variable casa_tipo la cual es string para mostrarsela al usuario al final del programa
        switch (tipo) //Este switch evalua el tipo de acabado que eligió el usuario, dependiendo de cual eligió se afectará la variable precio y mostrara un mensaje que dice cual casa y acabado seleccionó
        {
        case 1:
            precio = 80000000; //Aqui la variable precio es diferente a precio_final ya que despues hay otras condiciones que afectan el precio de manera significativa entonces para que sea más facil de entender usamos una variable especifica
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
        default://El caso default ocurrirá cuando el usuario digite una opcion diferente las que se les pide, ocasionando un error, entonces se le avisará al usuario y se cerrará el programa
         cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl;
            sleep(1); exit(0);
            break;
        }
    break;
        
    case 4:
        casa_tipo = "De dos pisos esquinera"; //Se almacena en la variable casa_tipo la cual es string para mostrarsela al usuario al final del programa
        switch (tipo) //Este switch evalua el tipo de acabado que eligió el usuario, dependiendo de cual eligió se afectará la variable precio y mostrara un mensaje que dice cual casa y acabado seleccionó
        {
        case 1:
            precio = 90000000; //Aqui la variable precio es diferente a precio_final ya que despues hay otras condiciones que afectan el precio de manera significativa entonces para que sea más facil de entender usamos una variable especifica
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
        default://El caso default ocurrirá cuando el usuario digite una opcion diferente las que se les pide, ocasionando un error, entonces se le avisará al usuario y se cerrará el programa
       		 cout<<"Tipo de acabado no valido, seleccione un valor valido"<<endl;
            sleep(1); exit(0);
            break;
        }
    break;

    default: //El caso default ocurrirá cuando el usuario digite una opcion diferente las que se les pide, ocasionando un error, entonces se le avisará al usuario y se cerrará el programa
            cout<<"Tipo de casa no valida, seleccione un valor valido"<<endl;
        sleep(1); exit(0);
        break;
    }
    switch (tipo){//Este switch evaluará el tipo de acabado y lo almacenará en la variable de tipo string "acabado" para mostrarsela al usuario al final del programa
    case 1:
        acabado = "Obra negra"; 
        break;
    case 2:
        acabado = "Acabados sencillos";
        break;
    case 3:
        acabado = "Acabados especiales";
        break;
    default: //Este default no muestra nada ya que antes evaluamos la posibilidad de que se digite una opción el programa y esa se encarga de avisarle al usuario del error
        break;
    }
    sleep(1);
    cout << "\x1B[2J\x1B[H" <<endl;
    
    if(casa == 3 || casa == 4 ){ //Las casas tipo esquinera son las unicas que tienen la opcion de tener jardin y vista a la piscina, entonces usamos un if  y el operador logico "or" para evaluar si el tipo de casa es esquinera
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"| Tipo de jardin     |    Suma al precio total    |"<<endl;
        cout<<"--------------------------------------------------+ "<<endl;
        cout<<"| Jardin grande[1]   |        "<<fixed<<setprecision(1)<<(precio*0.15)<<"         |"<<endl;     //Se hace una operación para mostrarle cuanto se le suma al precio total
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"| Jardin pequeño [2] |        "<<fixed<<setprecision(1)<<(precio*0.10)<<"         |"<<endl;    //Se hace una operación para mostrarle cuanto se le suma al precio total
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"Elija que jardin quiere: "; //Interacción con el usuario para almacenar la variable jardin 
        cin>>jardin;
        
        if (jardin == 1 || jardin == 2 ){ //Este if evalua si corresponde a una opción valida, de no serlo mandará un error
            switch (jardin) //Se evalua la variable jardin dependiendo del caso
            {
            case 1:
                jardin_op = "Jardin grande"; //Se guarda en la variable jardin_op la palabra "Jardin grande" para mostrarla al final del programa
                precio_final = precio*1.15; //Se afecta la variable precio sumandole el 15% ya que es un jardin grande, al final para mejor comprension se guarda en la variable precio_final
                break;
            case 2:
                jardin_op = "Jardin pequeño";//Se guarda en la variable jardin_op la palabra "Jardin grande" para mostrarla al final del programa
                precio_final = precio*1.10;  //Se afecta la variable precio sumandole el 10% ya que es un jardin pequeño, al final para mejor comprensión se guarda en la variable precio_final
                break;
            default:
                break;
            }
        }
        else{
            cout<<"Incorrecto, digite una opción correcta"; //Este else está conectado con el if del tipo de jardin y muestra al usuario que ha digitado una opción incorrecta 
            sleep(1); exit(0);
        }
        cout << "\x1B[2J\x1B[H" <<endl;
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"|      Opción        |     Suma al precio total   |"<<endl;
        cout<<"--------------------------------------------------+ "<<endl;
        cout<<"|    Con vista a la  |        "<<fixed<<setprecision(1)<<(precio*0.05)<<"         |"<<endl; //Se hace una operación para mostrarle cuanto se le suma al precio total 
        cout<<"|    piscina[1]      |                            |"<<endl;     
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"|    Sin vista a la  |                            |"<<endl;
        cout<<"|    piscina[2]      |           0                |"<<endl;   
        cout<<"+-------------------------------------------------+"<<endl;
        cout<<"¿Desea tener vista a la piscina (1 o 2)?"<<endl; //Interacción con el usuario para la elección de su preferencia y almacenar en la variable piscina
        cin>>piscina;   
        
        if (piscina == 1 || piscina == 2 ){ //Este if evalua si corresponde a una opción valida, de no serlo mandará un error
            switch (piscina){//Este switch evalua la variable piscina y tomará acción el caso que corresponda
                case 1:
                    piscina_op = "Con vista a la piscina"; //Se guarda la palabra "Con vista a la piscina" en la variable piscina_op para mostrarla al final del programa
                    precio_final += precio*0.05; //Al precio final se le suma el 5% del valor de la vivienda base(el tipo de casa y acabado)
                    break;
                case 2:
                    piscina_op = "Sin vista a la piscina"; //Se guarda la palabra "Sin vista a la piscina" en la variable piscina_op para mostrarla al final del programa
                    precio_final += 0; //No se le suma nada al precio final
                    break;
                default:
                    break;
                    }
        }
        else{
            cout<<"Incorrecto, digite una opcion correcta"; //Este else está conectado con el if de vista a la piscina y muestra al usuario que ha digitado una opción incorrecta
            sleep(1); exit(0);
        }
    cout << "\x1B[2J\x1B[H" <<endl;
    }
    
    else{ //Este else está conectado con el if de las casas esquinera, entonces si no se cumple la condición se almacenará en las variables jardin_op y piscina_op la palabra "No aplica" ya que las casas colindantes no pueden tener jardin ni vista a la piscina
    jardin_op = "No aplica"; piscina_op = "No aplica";	
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
        cout<<"Elija como desea el parqueadero(0, 1 o 2): "; cin>>parqueadero; //Interacción con el usuario para la elección de su preferencia y almacenar en la variable parqueadero
		
		switch(parqueadero){ //Este switch evalua la variable parqueadero y tomará acción el caso que corresponda
		case 0:
        parqueadero_op = "Sin parqueadero"; //Se guarda la palabra "Sin parqueadero" en la variable parqueadero_op para mostrarla al final del programa
		precio_final += 0; //No se le suma nada al precio final 
        break;
		
		case 1:
        parqueadero_op = "Un parqueadero"; //Se guarda la palabra "Un parqueadero" en la variable parqueadero_op para mostrarla al final del programa
		precio_final += 3000000; //Se le suma 3 millones al precio final
        break;
        
        case 2:
        parqueadero_op = "Dos parqueaderos";//Se guarda la palabra "Dos parqueaderos" en la variable parqueadero_op para mostrarla al final del programa
        precio_final += 6000000;//Se le suma 6 millones al precio final
        break;
		}   
		cuota_inicial = precio_final*0.3; //La cuota inicial es el 30% del valor total de la casa con todos los adicionales es decir el precio final
	
	 if(parqueadero == 2){ //Cuando una persona desea una casa con 2 parqueadero se le hace un 10% de descuento en la cuota inicial este if evalua que cuando el usuario desee 2 parqueaderos se le haga el respectivo descuento
  	descuento = cuota_inicial*0.1;
    }
      else{ //Este else está conectado con el if del parqueadero, entonces en caso de que el usuario no desee 2 parqueaderos no se hará descuento
     descuento = 0;	
      }
   	
    cuota_inicial = cuota_inicial-descuento; //Se le resta el descuento a la cuota inicial y se almacena
    saldo = precio_final - cuota_inicial; //El saldo es lo que queda por pagar despues de la cuota inicial, entonces el precio final de la casa con todos los adicionales se resta con la cuota inicial
	
	cout << "\x1B[2J\x1B[H" <<endl; 
	cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"|      Opción         |  Valor de la cuota mensual |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"| 5 años [0]          |         "<<fixed<<setprecision(1)<<saldo/60<<"       |"<<endl;     //Se hace una operación que muestra al usuario cuanto valdría cada cuota mensual en caso de pagar en 5 años
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"| 7 años [1]          |         "<<fixed<<setprecision(1)<<saldo/84<<"          |"<<endl;  //Se hace una operación que muestra al usuario cuanto valdría cada cuota mensual en caso de pagar en 7 años
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"| 10 años [2]         |         "<<fixed<<setprecision(1)<<saldo/120<<"           |"<<endl; //Se hace una operación que muestra al usuario cuanto valdría cada cuota mensual en caso de pagar en 10 años 
    cout<<"+---------------------+----------------------------+"<<endl;
    cout<<"Seleccione como quiere que sea el plazo (0, 1 o 2): "; cin>>financiacion; //Interacción con el usuario para la elección de su preferencia y almacenar en la variable financiacion
    
    if(financiacion == 0 || financiacion == 1 || financiacion == 2){ //Este if evalua si corresponde a una opción valida, de no serlo mandará un error
        switch (financiacion){ //Este switch evalua la variable financiacion y tomará acción el caso que corresponda
        case 0:
            plazo = 5; //Si el usuario escogió 0 el plazo es de 5 años, se almacena para mostrarla al final del programa
            cuota_mensual = saldo/60; //La cuota mensual se divide entre 60 ya que son 12 meses cada 5 años, se almacena para mostrarla al final del programa
            cant_cuotas = 60; //Cantidad cuotas mensuales, se almacena para mostrarla al final del programa
            break;
        case 1: 
            plazo = 7; //Si el usuario escogió 1 el plazo es de 7 años, se almacena para mostrarla al final del programa
            cuota_mensual = saldo/84;//La cuota mensual se divide entre 84 ya que son 12 meses cada 7 años, se almacena para mostrarla al final del programa
            cant_cuotas = 84;//Cantidad cuotas mensuales, se almacena para mostrarla al final del programa
            break;
        case 2:
            plazo = 10; //Si el usuario escogió 2 el plazo es de 7 años, se almacena para mostrarla al final del programa
            cuota_mensual = saldo/120;//La cuota mensual se divide entre 120 ya que son 12 meses por cada 10 años, se almacena para mostrarla al final del programa
            cant_cuotas = 120; //Cantidad cuotas mensuales, se almacena para mostrarla al final del programa
            break;
        default:
            break;
        }
    }
    else{ //Este else está conectado con el if de financiacion, en caso de que se digite una opción incorrecta, se mostrará un error
        cout<<"ERROR, digite una opcion correcta"; 
        sleep(1); 
        exit(0);
        }
    cout << "\x1B[2J\x1B[H" <<endl; 
    //Final del programa, se le muestra un resumen de todos los datos que el usuario proporcionó y los que le interesa saber
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
    cout<<"|        Plazo        |           "<<plazo<< " años           |"<<endl;
    cout<<"----------------------+----------------------------+ "<<endl;
    cout<<"|Cantidad de cuotas   |     "<<cant_cuotas<< " cuotas mensuales   |"<<endl;
    cout<<"| mensuales           |                            |"<<endl;
    cout<<"+---------------------+----------------------------+ "<<endl;
    }
    
    else { //Este else está conectado con el primer if del programa y muestra un error si el dni, los ingresos o el estrato social no corresponde a un dato valido 
    cout<<"ERROR, usted ingresó un dato no valido o no cumple con los requisitos para comprar una casa con nosotros"; exit(0); sleep(1); return 0;
	}
return 0;
}
