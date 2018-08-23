#include <stdio.h>
/* 
* Programa: Encontrar número menor
* Fecha: 16 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de código
int main(int argc, char *argv[]) { // Función principal main
	
	int numero = 2; // Declaración de una variable

	printf ("Ingrese un numero :"); // Se muestra mensaje
	scanf("%d",&numero); // Entrada de usuario a variable numero
	
	if(numero%2 == 0){ // Verificación del número par o impar
		printf ("Es un numero par"); // Se muestra mensaje
	}else{
		printf ("Es un impar"); // Se muestra mensaje
	}
	
	return 0;
}

