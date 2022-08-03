#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int utn_getChar(char* pResult,char* message,char* errorMessage,char minimum,char maximum,int retries);
int utnGetString(char *pAux,int limit,int retries,char* msj,char*msjError);
int sonLetras(char*pAux);
int getString(char* pAux,int limit);
int validFloat(char str[]);
float inputValidFloat(char message[], int max);
void inputStr(char* mensaje, char* str);
int inputValidInt(char* message,char* errorMessage,int minimum,int maximum,int retries);
int inputInt(char* string);
int esNumerico(char* string);
void mensaje(char* cadena);
int menu();
char confirma(char* mensaje);
char getCaracter(char* mensaje);
float inputFloat(char* string);
void cuilValido(char* cadena,char* mensaje,char* mensajeError,int reintentos);


#endif // UTN_H_INCLUDED
