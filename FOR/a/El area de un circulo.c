#include <stdio.h>
/* 
* Programa: Encontrar n�mero menor
* Fecha: 16 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de c�digo
int main(int argc, char *argv[]) { // Funci�n principal main
	
	float area; // Declaraci�n de una variable
	float radio; // Declaraci�n de una variable
	int i; // Declaraci�n de una variable
	
	for(i = 1; i <=5; i++) { // Ciclo for para repetir acciones
	printf( "\n   Introduzca radio: " ); // Se muestra mensaje
	scanf( "%f", &radio ); // Entrada de usuario a variable radio
	
	area = 3.141592 * radio * radio; // Operaci�n para hallar el area del circulo

	printf( "\n   El %crea de la circunferencia es: %.2f \n", 160, area ); // Se muestra mensaje
}
	return 0;
}

