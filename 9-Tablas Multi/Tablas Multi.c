#include <stdio.h>
#include <math.h>

//Funcion que escribe la portada
int Portada () //datos de entrada entre el parentesis
{
	printf("				Programa que calcula el pago \n\n"); //Titulo del programa
	printf("						Programacion I \n");
	printf("					Gomez Gonzalez Astrid Yoatziry \n");
	printf("						1104	 MAC \n\n\n");
	system ("Pause"); //Pausar el programa (presiona una tecla para continuar)
}

int main()
{
	Portada();
	int tabla, numero, resultado;
	printf("Tablas de multiplicar 1 al 10 \n\n");
	
	//for(inicializacion;condicion (mientras, que sea...);paso)
	for (tabla=1;tabla<=10;tabla=tabla+1) 
	{
		printf("\n Tabla %d \n",tabla);
		for (numero=1;numero<=10;numero++)
		{
			resultado=tabla*numero;
			printf("%d x %d = %d \n",tabla,numero,resultado);
			
		}
	}
	system("pause");
}



/* numero++ = numero=numero+1
	anidados: if, for, whiles
*/
