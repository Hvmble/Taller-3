#include <stdio.h>
/* 
* Programa: Encontrar número menor
* Fecha: 16 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de código
int main(int argc, char *argv[]) { // Función principal main
	
	float area; // Declaración de una variable
	float radio; // Declaración de una variable
	int i; // Declaración de una variable
	
	for(i = 1; i <=5; i++) { // Ciclo for para repetir acciones
	printf( "\n   Introduzca radio: " ); // Se muestra mensaje
	scanf( "%f", &radio ); // Entrada de usuario a variable radio
	
	area = 3.141592 * radio * radio; // Operación para hallar el area del circulo

	printf( "\n   El %crea de la circunferencia es: %.2f \n", 160, area ); // Se muestra mensaje
}
	return 0;
}

