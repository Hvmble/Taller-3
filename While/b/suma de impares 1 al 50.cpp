#include <stdio.h>
/* 
* Programa: Encontrar número menor
* Fecha: 19 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de código
int main(int argc, char *argv[]) { // Función principal main
	
	int b=0; // Declaración de una variable
	int n; // Declaración de una variable
	int suma=0; // Declaración de una variable
	
	while (b<=50){ // Ciclo while para repetir acciones
		
		if(b%2==1){ // Verificación del número si es impar
			
			suma=suma+b; // Sumatoria de los números impares
		}
		b++; // Contador hasta llegar al limite
	}
	 printf("la suma de los primeros 50 impares es:" "%d",suma); // Se muestra mensaje 
	
	return 0;
}

