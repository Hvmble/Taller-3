#include <stdio.h>
/* Programa: Conversión de dolares a pesos colombianos
 * Fecha: 16 de agosto 2018
 * Elaborador: Mauricio Montoya Abadia
 */
//Comienzo de código

int main(int argc, char *argv[]) { // Función principal main
	int valor_dolar; // Declaración de una variable
	int cantidad_dolar; // Declaración de una variable
	int cambio_dolar; // Declaración de una variable
	
	printf("Ingrese el valor de un dolar en COP: "); // Se muestra mensaje
	scanf("%d",&valor_dolar); // Entrada de usuario a variable valor_dolar
	printf("Ingres la cantidad de dolares que tiene: "); // Se muestra mensaje
	scanf("%d", &cantidad_dolar); // Entrada de usuario a variable cantidad_dolar
	
	cambio_dolar = (valor_dolar*cantidad_dolar); // Conversión de dolares a pesos colombianos
	
	printf(" El valor que tiene usted en peso colombiano es de: %d",cambio_dolar); // Se muestra el resultado
	
	return 0;
}

