#include <stdio.h>
/* 
* Programa: Encontrar n�mero menor
* Fecha: 19 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de c�digo
int main(int argc, char *argv[]) { // Funci�n principal main
	
	int b=0; // Declaraci�n de una variable
	int n; // Declaraci�n de una variable
	int suma=0; // Declaraci�n de una variable
	
	while (b<=50){ // Ciclo while para repetir acciones
		
		if(b%2==1){ // Verificaci�n del n�mero si es impar
			
			suma=suma+b; // Sumatoria de los n�meros impares
		}
		b++; // Contador hasta llegar al limite
	}
	 printf("la suma de los primeros 50 impares es:" "%d",suma); // Se muestra mensaje 
	
	return 0;
}

