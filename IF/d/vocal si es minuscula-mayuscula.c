#include <stdio.h>
#include <conio.h>
/* 
* Programa: Encontrar n�mero menor
* Fecha: 16 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de c�digo
int main(int argc, char *argv[]) { // Funci�n principal main
	
	char vocal; // Declaraci�n de una variable
	
	printf("Ingrese una letra: ");// Se muestra mensaje
	scanf("%c",&vocal); // Entrada de usuario a variable vocal
	if(vocal >= 'a' && vocal <= 'u') // Verificaci�n si es vocal min�scula
		printf("\n-> Es minuscula ");// Se muestra mensaje
	else if(vocal >= 'A' && vocal <= 'U')// Verificaci�n si es vocal may�scula
		printf("\n-> Es mayuscula ");// Se muestra mensaje
	else
		printf("\n-> No es una vocal");// Se muestra mensaje
	
	getch();
	
	
	return 0;
	
}

