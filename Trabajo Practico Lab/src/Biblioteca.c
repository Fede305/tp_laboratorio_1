/*
 * Biblioteca.c
 *
 *  Created on: 16 abr. 2021
 *      Author: Usuario
 */
/**
 * @fn int pedirNumero()
 * @brief  Funcion para pedir un numero que me retorna un numero y lo muestra en consola.
 *
 * @param numero1;
   @param numero2;
 * @return num;
 */
/**
 * @fn int sumarEnteros(int, int)
 * @brief  Suma entre enteros.
 *
 * @param numero1
 * @param numero2
 * @return resultado;
 */
/**
 * @fn int restarEnteros(int, int)
 * @brief Resta entre enteros.
 *
 * @param numero1
 * @param numero2
 * @return resultado;
 */
/**
 * @fn float divisionEnteros(float, float)
 * @brief Division entre enteros y que no sea posible la divion por 0.
 *
 * @param numero1
 * @param numero2
 * @return resultado;
 */
/**
 * @fn int multiplicarEnteros(int, int)
 * @brief  Multiplicacion entre enteros
 *
 * @param numero1
 * @param numero2
 * @return resultado;
 */
/**
 * @fn int calcularFactorial(int)
 * @brief Operacion de sacar el factorial de un numero.
 *
 * @param numero
 * @return resultado;
 */

#include "Biblioteca.h"
int pedirNumero()
{
    int num;
    printf("Ingrese un numero: ");
   scanf("%d", &num);

  return num;
}
//suma
int sumarEnteros(int numero1, int numero2)
{
    int resultado;
    resultado = numero1 + numero2;
    return resultado;
}

//resta
int restarEnteros(int numero1, int numero2)
{
    int resultado;
    resultado = numero1 - numero2;
return resultado;
}

//division
float divisionEnteros (float numero1, float numero2)
{
 float resultado;

 if (numero2 == 0)
 {
  resultado = 0;
 }
 else
 {
  resultado = numero1 / numero2;
 }

 return resultado;
}


//multipliación
int multiplicarEnteros(int numero1, int numero2)
{
    int resultado;
    resultado = numero1 * numero2;
return resultado;
}

//factorial
int calcularFactorial(int numero)
{
    int resultado;

    if(numero==0){
        resultado = 1;
    }
    else{
        resultado=numero * calcularFactorial(numero-1);
    }

    return resultado;
}



