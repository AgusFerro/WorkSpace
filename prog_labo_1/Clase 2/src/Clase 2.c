/*
 ============================================================================
 Name        : Clase.c
 Author      : Agustin
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int acumulador;
	int numero;
	float promedio;

	for(int i=0;i<5;i++)
	{
		printf("Ingrese numero");
		scanf("%d",&numero);
		acumulador = acumulador + numero;
	}
	promedio = acumulador / 5;
	printf("El promedio es: %f",promedio);

}
