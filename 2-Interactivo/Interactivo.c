#include<stdio.h>
int main()
{
	float numero,cuadrado; //estas son variables
	printf ("Ingresa un numero ");
	scanf("%f",&numero); //la f es por numero flotante
	cuadrado=numero*numero;
	printf("El cuadrado de %f es %f",numero,cuadrado);
}

/* float= numeros de puntos flotante o sea reales pequeños
%f es el lugar que sera remplaxado por la variable que esta enseguida */
