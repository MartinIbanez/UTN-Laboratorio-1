// Nombre: Martin Ibañez
//Guía de Trabajos Prácticos Nº 1
//Ej N°: 1
/* Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada
y listar por pantalla el sueldo que le corresponda*/

#include<iostream>

using namespace std;
int main(void) {
    int hr_trabajadas;
    float valor_hora,sueldo;

    cout<<"Total de horas trabajadas:  ";
    cin>> hr_trabajadas;
    cout<<"Valor por hora:  ";
    cin>> valor_hora;
sueldo=hr_trabajadas*valor_hora;

    cout<<endl<<endl<<"Sueldo neto a cobrar:  "<<sueldo<<endl<<endl;

	return 0;
}
