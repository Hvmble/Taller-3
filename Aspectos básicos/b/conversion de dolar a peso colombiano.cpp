#include <stdio.h>
/* Programa: Conversi�n de dolares a pesos colombianos
 * Fecha: 16 de agosto 2018
 * Elaborador: Mauricio Montoya Abadia
 */
//Comienzo de c�digo

int main(int argc, char *argv[]) { // Funci�n principal main
	int valor_dolar; // Declaraci�n de una variable
	int cantidad_dolar; // Declaraci�n de una variable
	int cambio_dolar; // Declaraci�n de una variable
	
	printf("Ingrese el valor de un dolar en COP: "); // Se muestra mensaje
	scanf("%d",&valor_dolar); // Entrada de usuario a variable valor_dolar
	printf("Ingres la cantidad de dolares que tiene: "); // Se muestra mensaje
	scanf("%d", &cantidad_dolar); // Entrada de usuario a variable cantidad_dolar
	
	cambio_dolar = (valor_dolar*cantidad_dolar); // Conversi�n de dolares a pesos colombianos
	
	printf(" El valor que tiene usted en peso colombiano es de: %d",cambio_dolar); // Se muestra el resultado
	
	return 0;
}

