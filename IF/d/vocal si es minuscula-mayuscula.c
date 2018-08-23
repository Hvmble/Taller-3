#include <stdio.h>
#include <conio.h>
/* 
* Programa: Encontrar número menor
* Fecha: 16 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de código
int main(int argc, char *argv[]) { // Función principal main
	
	char vocal; // Declaración de una variable
	
	printf("Ingrese una letra: ");// Se muestra mensaje
	scanf("%c",&vocal); // Entrada de usuario a variable vocal
	if(vocal >= 'a' && vocal <= 'u') // Verificación si es vocal minúscula
		printf("\n-> Es minuscula ");// Se muestra mensaje
	else if(vocal >= 'A' && vocal <= 'U')// Verificación si es vocal mayúscula
		printf("\n-> Es mayuscula ");// Se muestra mensaje
	else
		printf("\n-> No es una vocal");// Se muestra mensaje
	
	getch();
	
	
	return 0;
	
}

