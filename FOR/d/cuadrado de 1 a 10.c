#include <stdio.h>
#include <math.h>
/* 
* Programa: Encontrar n�mero menor
* Fecha: 19 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de c�digo
int main(int argc, char *argv[]) { // Funci�n principal main
	
	int numero; // Declaraci�n de una variable
	
	for( numero = 1; numero <= 10; numero++){ // Ciclo while para repetir acciones
		
		printf( "%.f\n",pow(numero,2)); // Se muestra mensaje // C�lculo cuadrado de cada n�mero
	}
	return 0;
}


