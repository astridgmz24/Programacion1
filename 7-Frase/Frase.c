#include <stdio.h>

//Funcion que escribe la portada
int Portada ()
{
	printf("					Programa que repite una frase \n\n");
	printf("						Programacion I \n");
	printf("					Gomez Gonzalez Astrid Yoatziry \n");
	printf("						1104	 MAC \n\n\n");
	system ("Pause");
}

//Programa principal
int main()
{
	int cantidad_veces, repeticion, respuesta;
	char frase[100]; //guardar caracteres (solo una letra, [] arreglo para cantidad de caracteres). Codigo ASCII
	Portada();
	
	do
	{
		printf ("Ingresa una frase "); //dejar un espacio en blanco al final para que no quede pegado cuando se ingresa
		fflush(stdin); //borrar basura de memoria
		gets (frase); //otra forma de scanf
		
		printf ("Ingresa el numero de veces ");
		scanf ("%d",&cantidad_veces);
		
		for (repeticion=1;repeticion<=cantidad_veces;repeticion=repeticion+1)
		{
			printf ("%d.- %s \n",repeticion,frase); 
		}
		system ("Pause");
		printf ("Deseas continuar? (1=si, 0=no) ");
		scanf ("%d",&respuesta);
	}
	while (respuesta==1);
	return 0;
}



/*  scanf = recuperar valores ("%S",Frase) S de String, no se pone el & por que son 100 caracteres
	gets = get String
	%d = decimal entero
	for (inicializacion;condicion;actualizacion)
	repeticion= variable de control
*/
