#include <stdio.h>
/* 
 * Programa: Días de la semana
 * Fecha: 16 de agosto 2018
 * Elaborador: Mauricio Montoya Abadia
 */

//Comienzo de código
int main(int argc, char *argv[]) { // Función principal main
	
	int dia; // Declaración de una variable
	
	printf( "\n   Introduzca dia de la semana: "); // Se muestra mensaje
	scanf( "%d", &dia ); // Entrada de usuario a variable dia
	
	if ( dia >= 1 && dia <= 7 ) // Validación días de la semana (rango)

	switch ( dia )
	{
	case 1 : printf( "\n   Lunes" ); // Se muestra el resultado
	break;
	case 2 : printf( "\n   Martes" ); // Se muestra el resultado
	break;
	case 3 : printf( "\n   Miercoles" ); // Se muestra el resultado
	break;
	case 4 : printf( "\n   Jueves" ); // Se muestra el resultado
	break;
	case 5 : printf( "\n   Viernes" ); // Se muestra el resultado
	break;
	case 6 : printf( "\n   Sabado" ); // Se muestra el resultado
	break;
	case 7 : printf( "\n   Domingo" ); // Se muestra el resultado
	}
	else
	
	printf( "\n   ERROR: Dia incorrecto." ); // Se muestra mensaje
	
	return 0; // Fin del programa
}

