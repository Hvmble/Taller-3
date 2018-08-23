#include <stdio.h>
/* 
* Programa: Encontrar número mayor
* Fecha: 16 de agosto 2018
* Elaborador: Mauricio Montoya Abadia
*/

//Comienzo de código
int main(int argc, char *argv[]) { // Función principal main
	int num1; // Declaración de una variable
	int num2; // Declaración de una variable
	int num3; // Declaración de una variable
	
	printf("Ingrese el primer numero: \n"); // Se muestra mensaje
	scanf("%d",&num1); // Entrada de usuario a variable num1
	printf("Ingrese el segundo numero: \n"); // Se muestra mensaje
	scanf("%d",&num2); // Entrada de usuario a variable num2
	printf("Ingrese el tercer numero:\n"); // Se muestra mensaje
	scanf("%d",&num3); // Entrada de usuario a variable num3
	
	if (num1>num2 && num3<num1){ // Verificación del número mayor
	   printf("El numero mayor es: %d \n",num1); // Se muestra mensaje
	}
	else{
		if(num2>num1 && num3<num2){ // Verificación del número mayor
			printf("El numero mayor es: %d \n",num2); // Se muestra el resultado
		}
		else{
			printf("El numero mayor es: %d \n",num3); // Se muestra el resultado
		}
	}
	
	return 0; // Fin del programa
}

