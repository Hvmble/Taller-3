#include <stdio.h>
/* 
* Programa: Encontrar n�mero menor
* Fecha: 16 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de c�digo
int main(int argc, char *argv[]) { // Funci�n principal main
	
	int numero; // Declaraci�n de una variable
	
	for ( numero = 64 ; numero >= 4 ; numero += -4 ) // Ciclo for para repetir acciones
	{
		printf("%d ", numero); // Se muestra mensaje
	}
	
	return 0;
}

