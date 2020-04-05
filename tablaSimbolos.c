/*********** Librerias utilizadas **************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/************* Definiciones ********************/

//Codigos
#define L_CORCHETE 	      91
#define R_CORCHETE	      93
#define L_LLAVE 	      123
#define R_LLAVE 	      125
#define COMA		      44
//#define DOS_PUNTOS	      261
#define DOS_PUNTOS	      58
#define STRING            288
#define NUMBER  	      284
#define PR_TRUE		      286
#define PR_FALSE	      286
#define PR_NULL           266
#define FINAL 			  267

#define NUM			284
#define ID			285
#define BOOL		286
#define CAR			287
#define LITERAL		288
#define NOT			289
#define OPREL		290
#define OPSUMA		291
#define OPMULT		292
#define OPASIGNA	293
#define USER_TYPE	294

// Fin Codigos
#define TAMBUFF 	5
#define TAMLEX 		50
#define TAMHASH 	101

/************* Estructuras ********************/

typedef struct entrada{
	//definir los campos de 1 entrada de la tabla de simbolos
	int compLex;
	char lexema[TAMLEX];	
	struct entrada *tipoDato; // null puede representar variable no declarada	
	// aqui irian mas atributos para funciones y procedimientos...
	
} entrada;

typedef struct {
	int compLex;
	entrada *pe;
} token;

/************* Prototipos ********************/
void insertar(entrada e);
entrada* buscar(const char *clave);
void initTabla();
void initTablaSimbolos();
void sigLex();
