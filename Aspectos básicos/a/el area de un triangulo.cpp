#include <stdio.h>
/* Programa: Calcular el área de un triángulo
 * Fecha: 16 de agosto 2018
 * Elaborador: Mauricio Montoya Abadia
 */
 //Comienzo de código

int main(int argc, char *argv[]) { // Función principal main
	
	float altura; // Declaración de una variable
	float area;   // Declaración de una variable
	float base;   // Declaración de una variable
	
	printf( "Introduzca base: " ); // Se muestra mensaje
	scanf( "%f", &base ); // Entrada de usuario a variable base
	printf( "Introduzca altura: " ); // Se muestra mensaje
	scanf( "%f", &altura ); // Entrada de usuario a variable altura
	
	area = (base * altura) / 2; // Cálculo del área de un triángulo
	
	printf( "El area del triangulo es: %1.1f", area ); // Se muestra el resultado
	
	return 0; // Fin del programa
}

