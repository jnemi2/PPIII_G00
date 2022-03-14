
/* Declara global la Interfaz definida por el Compilador */
#include <stdio.h>
#include <stdlib.h>

/* Instancia global el Tipo de Dato definido por el Compilador */
int estado_global;
int natural_global;
int codigo_global;
int natural_global_A;
int natural_global_B;

int main(int argc, char *argv[]) 
{
	/* Instancia local el Tipo de Dato definido por el Compilador */
	int natural_uno;
	int natural_dos;
	int natural_tres;

	natural_uno = 15;
	printf("\nPrimer numero natural: %d\n", natural_uno);

	natural_global = natural_uno;
	codigo_global = 1;
	goto Validar_Natural;
	
Retornar_Validar_Natural_Uno:
	
	goto Mensaje_Validar_Natural;
	
Retornar_Mensaje_Validar_Natural_Uno:

	if (estado_global == 0)
	{
		natural_dos = 12;
		printf("\nSegundo numero natural: %d\n", natural_dos);

		natural_global = natural_dos;
		codigo_global = 2;
		goto Validar_Natural;
	
Retornar_Validar_Natural_Dos:
		
		goto Mensaje_Validar_Natural;
	
Retornar_Mensaje_Validar_Natural_Dos:

		if (estado_global == 0)
		{
			natural_tres = 6;
			printf("\nTercer numero natural: %d\n", natural_tres);

			natural_global = natural_tres;
			codigo_global = 3;
			goto Validar_Natural;
	
Retornar_Validar_Natural_Tres:

			goto Mensaje_Validar_Natural;
	
Retornar_Mensaje_Validar_Natural_Tres:

			if (estado_global == 0)
			{
				natural_global_A = natural_uno;
				natural_global_B = natural_dos;
				codigo_global = 12;
	
				printf("\nUtiliza natural UNO y natural DOS con dos naturales globales\n" );	
				goto Comparar_Natural;
	
Retornar_Comparar_Natural_Uno_Dos:
	
				if (estado_global == 1)
				{
					printf("Primer numero natural %d mayor segundo numero natural %d\n", natural_uno, natural_dos);
				}
				else
				{
					if (estado_global == -1)
					{
						printf("Segundo numero natural %d mayor primer numero natural %d\n", natural_dos, natural_uno);
					}
					else
					{
						printf("Primer numero natural %d igual segundo numero natural %d\n", natural_uno, natural_dos);
					}
				}
	
				natural_global_A = natural_uno;
				natural_global_B = natural_tres;
				codigo_global = 13;
	
				printf( "\nUtiliza natural UNO y natural TRES con dos naturales globales\n");	
				goto Comparar_Natural;
	
Retornar_Comparar_Natural_Uno_Tres:
	
				if (estado_global == 1)
				{
					printf("Primer numero natural %d mayor tercer numero natural %d\n", natural_uno, natural_tres);
				}
				else
				{
					if (estado_global == -1)
					{
						printf("Tercer numero natural %d mayor primer numero natural %d\n", natural_tres, natural_uno);
					}
					else
					{
							printf("Primer numero natural %d igual tercer numero natural %d\n", natural_uno, natural_tres);
					}
				}
	
				natural_global_A = natural_dos;
				natural_global_B = natural_tres;
				codigo_global = 23;

				printf( "\nUtiliza natural DOS y natural TRES con dos naturales globales\n");	
				goto Comparar_Natural;
	
Retornar_Comparar_Natural_Dos_Tres:
	
				if (estado_global == 1)
				{
					printf("Segundo numero natural %d mayor tercer numero natural %d\n", natural_dos, natural_tres);
				}
				else
				{
					if (estado_global == -1)
					{
						printf("Tercer numero natural %d mayor segundo numero natural %d\n", natural_tres, natural_dos);
					}
					else
					{
						printf("Segundo numero natural %d igual tercer numero natural %d\n", natural_dos, natural_tres);
					}
				}
			}	
		}
	}
	
	system("pause");
	
	return (0);				

Validar_Natural:

    if (natural_global == 0)
    	estado_global = -1;
    else
		if (natural_global < 0)
        	estado_global = -2;
		else
			estado_global = 0;

	if (codigo_global == 1)
		goto Retornar_Validar_Natural_Uno;
	else
		if (codigo_global == 2)
			goto Retornar_Validar_Natural_Dos;
		else
			if (codigo_global == 3)
				goto Retornar_Validar_Natural_Tres;

Mensaje_Validar_Natural:

	if (estado_global == -1)
		printf("El numero natural no puede ser cero\n");
	else
		if (estado_global == -2)
			printf("El numero natural no puede ser negativo\n");
		else	
			printf("El numero natural es correcto\n");

	if (codigo_global == 1)
		goto Retornar_Mensaje_Validar_Natural_Uno;
	else
		if (codigo_global == 2)
			goto Retornar_Mensaje_Validar_Natural_Dos;
		else
			if (codigo_global == 3)
				goto Retornar_Mensaje_Validar_Natural_Tres;

Comparar_Natural:

	if (natural_global_A > natural_global_B)
		estado_global = 1;
	else
		if (natural_global_A < natural_global_B)
			estado_global = -1;
		else
			estado_global = 0;

	if (codigo_global == 12)
		goto Retornar_Comparar_Natural_Uno_Dos;
	else
		if (codigo_global == 13)
			goto Retornar_Comparar_Natural_Uno_Tres;
		else
			if (codigo_global == 23)
				goto Retornar_Comparar_Natural_Dos_Tres;
}



