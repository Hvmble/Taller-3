#include <stdio.h>
/* 
* Programa: Encontrar n�mero menor
* Fecha: 16 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de c�digo
int main(int argc, char *argv[]) { // Funci�n principal main
	
	int numero = 2; // Declaraci�n de una variable

	printf ("Ingrese un numero :"); // Se muestra mensaje
	scanf("%d",&numero); // Entrada de usuario a variable numero
	
	if(numero%2 == 0){ // Verificaci�n del n�mero par o impar
		printf ("Es un numero par"); // Se muestra mensaje
	}else{
		printf ("Es un impar"); // Se muestra mensaje
	}
	
	return 0;
}

