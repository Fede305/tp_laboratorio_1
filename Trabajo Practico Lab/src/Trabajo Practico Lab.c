/*
 ============================================================================
 Name        : Trabajo.c
 Author      : Federico Gomez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
int main(void) {
setbuf(stdout, NULL);
    int Numero1;
    Numero1=0;
    int Numero2;
    Numero2= 0;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMulti;
    int resultadoFactorial;
	int opcion;
	fflush(stdin);
	do
	{
		printf("1. Ingrese 1er operando A + %d\n",Numero1);
		printf("2. Ingrese 2do operando B + %d\n",Numero2);
		printf("3. Calcular operaciones\n");
		printf("4. Informar Resultado\n");
		printf("5. Salida\n");
		printf("Elija una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
			    Numero1=pedirNumero();
				printf("Primer operando\n");

			break;
			case 2:
			    Numero2=pedirNumero();
				printf("Segundo operando\n");

			break;
			case 3:

			resultadoSuma = sumarEnteros(Numero1,Numero2);
			resultadoResta = restarEnteros(Numero1,Numero2);
			resultadoDivision = divisionEnteros(Numero1, Numero2);
			resultadoMulti = multiplicarEnteros(Numero1,Numero2);
			resultadoFactorial = calcularFactorial(Numero1);
			resultadoFactorial = calcularFactorial(Numero2);
            printf("Calculando operaciones\n");
			break;
			case 4:
				printf("El resultado de la Suma es %d\n", resultadoSuma);
				printf("El resultado de la Resta es %d\n", resultadoResta);
				if (resultadoDivision == 0)
				  {
				     printf("NO es posible dividir por 0");
				  }
				 else
				 {
				  printf("EL resultado de la division es: %f", resultadoDivision);
				 }
				printf("El resultado de la Division es %.2f\n", resultadoDivision);
				printf("El resultado de la Multiplicación es %d\n", resultadoMulti);
				printf("El resultado del Factotial es %d\n", resultadoFactorial);
				printf("Resultado\n");
			break;
			case 5:
				printf("Gracias por usar este programa");
            break;
		}



	}while(opcion!=5);
	return EXIT_SUCCESS;
}
