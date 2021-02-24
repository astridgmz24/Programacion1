#define PI 3.1415927 //definicion de constante simbolica
#include <stdio.h>
#include<math.h> //biblioteca funciones trigonometricas

//Funcion que escribe la portada

int Portada () //datos de entrada entre el parentesis
{
	printf("				Programa que calcula el area de un circulo \n\n"); //Titulo del programa
	printf("						Programacion I \n");
	printf("					Gomez Gonzalez Astrid Yoatziry \n");
	printf("						1104	 MAC \n\n\n");
	system ("Pause"); //Pausar el programa (presiona una tecla para continuar)
}

//Programa principal

int main()
{
	float radio, area; int respuesta; //declaracion de variables y su tipo
	Portada(); //Invocar, llamar, ejecutar a la funcion
	do
	{
		printf ("Ingresa el radio del circulo "); //dejar un espacio en blanco al final
		scanf ("%f",&radio); //sin espacios
	
		area=PI*pow(radio,2.0);
	
		printf("El area del circulo de radio %f es %f \n\n",radio,area);
		printf ("Deseas continuar? (1=si, 0=no) ");
		scanf ("%d",&respuesta); //d decimal para int
		
	}
	while (respuesta==1); //condicion (0=falso, otro valor=verdadero)
	return 0;
	
}

/* 	\n= enter (adentro del texto)
	system: le pido al SO que ejecute una funcion, puede que no sirva en todos los SO
	printf y scanf siempre van juntos
	pow=potencia (base,exponente) se puede solo con libreria math.h
*/
