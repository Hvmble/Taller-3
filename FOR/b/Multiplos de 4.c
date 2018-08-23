#include <stdio.h>
/* 
* Programa: Encontrar número menor
* Fecha: 16 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de código
int main(int argc, char *argv[]) { // Función principal main
	
	int numero; // Declaración de una variable
	
	for ( numero = 64 ; numero >= 4 ; numero += -4 ) // Ciclo for para repetir acciones
	{
		printf("%d ", numero); // Se muestra mensaje
	}
	
	return 0;
}

