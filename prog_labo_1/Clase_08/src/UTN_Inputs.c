/*
 * UTN_Inputs.c
 *
 *  Created on: 11 sep. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "UTN_Inputs.h"
#include "UTN_Validaciones.h"

int getInt(	int *pResultado,
			char *pMensaje,
			char *pMensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = -1;
	int buffer;
	char input[50];
	int length;
	do
	{
		printf("%s",pMensaje);
		fgets(input,sizeof(input),stdin);
		length = strlen(input);
		length--;
		if(validarInt(input,length)==0)
		{
			buffer = atoi(input);
			if(buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",pMensajeError);
				reintentos--;
			}

		}
		else
		{
			printf("No es un numero");
			reintentos--;
		};

	}while(reintentos >= 0);
	return retorno;
}

int getString(char* pMessage,char* pErrMessage, char* pString)
{
	int retorno = -1;
	char buffer[100];
	if(pMessage != NULL && pErrMessage != NULL)
	{
		printf("%s", pMessage);
		fgets(buffer, sizeof(buffer), stdin);
		buffer[strlen(buffer)-1]='\0';
		if(isLetter(buffer)==1)
		{
		strcpy(pString, buffer);
		retorno = 0;
		}else
		{
			printf("%s", pErrMessage);
		}
	}
	return retorno;
}

int isLetter(char* string)
{
	int retorno = 1;
	int i = 0;
	while(string[i] != '\0')
	{
		if((string[i] < 'a' || string[i] > 'z') &&
		   (string[i] < 'A' || string[i] > 'Z') &&
		   (string[i] != ' '))
		{
			retorno = 0;
		}
		i++;
	}
	return retorno;
}
