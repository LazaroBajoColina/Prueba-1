// Este es un programa de sentencia switch y con la libreria <languaje.h> que ayuda a la gramatica espa�ola 
#include <iostream>
#include <locale.h>
using namespace std;
int main(){
int mes;
cout<<"Digita un numero 1-12: ";cin>> mes;
//setlocale (LC_CTYPE, "Spanish");
switch (mes){//Sentenica o bucle con casos
case 1: cout<<"Digitaste el mes de enero";break;
case 2: cout<<"Digitaste el mes de febrero";break;
case 3: cout<<"Digitaste el mes de marzo";break;
case 4: cout<<"Digitaste el mes de abril: ";break;
case 5: cout<<"Digitaste el mes de mayo: ";break;
case 6: cout<<"Digitaste el mes de junio: "; break;
case 7: cout<< "Digitaste el mes de julio: "; break;
case 8: cout<< "Digitaste el mes de agosto: "; break;
case 9: cout<< "Digite el mes septiembre: "; break;
case 10: cout<<"Digitaste el mes de octubre: "; break;
case 11: cout<< "Digitaste el mes de noviembre "; break;
case 12: cout<< "Digitaste el mes de diciembre este mes se caracteriza por lo frío que es"; break;
default:cout<<"No hay un mes 13,14,15,16 o 17, intentalo de nuevo";break;

 }
return 0;
}
 