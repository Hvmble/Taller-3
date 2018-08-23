#include <stdio.h>
#include <math.h>
/* 
* Programa: Encontrar número menor
* Fecha: 19 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de código
int main(int argc, char *argv[]) { // Función principal main
	
	int numero; // Declaración de una variable
	
	for( numero = 1; numero <= 10; numero++){ // Ciclo while para repetir acciones
		
		printf( "%.f\n",pow(numero,2)); // Se muestra mensaje // Cálculo cuadrado de cada número
	}
	return 0;
}


