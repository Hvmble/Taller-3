#include <stdio.h>
/* Programa: Calcular el area de un rect�ngulo
 * Fecha: 16 de agosto 2018
 * Elaborador: Mauricio Montoya Abadia
 */

//Comienzo de c�digo

int main(int argc, char *argv[]) { // Funci�n principal main
	
	float altura; // Declaraci�n de una variable
	float area;   // Declaraci�n de una variable
	float base;   // Declaraci�n de una variable
	
	printf( "Introduzca base: " ); // Se muestra mensaje
	scanf( "%f", &base ); // Entrada de usuario a variable base
	printf( "Introduzca altura: " ); // Se muestra mensaje
	scanf( "%f", &altura ); // Entrada de usuario a variable altura
	
	area = (base * altura); // C�lculo del �rea de un rect�ngulo
	
	printf( "El area del triangulo es: %1.1f", area ); // Se muestra el resultado
	return 0;
}

