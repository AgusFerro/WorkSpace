#ifndef INPUTS_H_
#define INPUTS_H_

#include "Validaciones.h"

int getString(char* msg, char* msgError, int min, int max, int* reintentos, char* resultado);

int utn_getName(char* msg,char* msgError,int min,int max,int reintentos,char* resultado);

int utn_getInt(int *pResultado,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reintentos);

int utn_getSignedInt(char* msg, char* msgError, int minSize, int maxSize, int min, int max, int reintentos, int* input);

int utn_getFloat(float *pResultado,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reintentos);

int utn_getTelefono(char* msg, char* msgError, int minSize, int maxSize, int min, int max, int reintentos, char* input);

int utn_getDNI(char* msg, char* msgError, int minSize, int maxSize, int reintentos, char* input);

int utn_getCUIT(char* msg, char* msgError, int reintentos, char* input);

int utn_getEmail(char* msg, char* msgError, int minSize, int maxSize, int reintentos, char* input);

int utn_getTexto(char* msg, char* msgError, int minSize, int maxSize, int reintentos, char* input);

int utn_getAlfanumerico(char* msg, char* msgError, int minSize, int maxSize, int reintentos, char* input);

int utn_getChar(char* msg, char* msgError, int min, int max, int reintentos, char* resultado);

#endif
