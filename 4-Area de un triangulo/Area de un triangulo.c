#include <stdio.h>

//Portada
int Portada ()
{
	printf("				Programa que calcula el area de un triangulo \n\n"); 
	printf("						Programacion I \n");
	printf("					Gomez Gonzalez Astrid Yoatziry \n");
	printf("						1104	 MAC \n\n\n");
	system ("Pause"); 
}

//Programa principal

int main()
{
	float base, altura, area; int continuar;
	Portada();
	do
	{
		printf ("Ingresa la base del triangulo ");
		scanf ("%f",&base);
		printf ("Ingresa la altura del triangulo ");
		scanf ("%f",&altura);
	
		area=(base*altura)/2;
	
		printf("El area del triangulo es %f \n\n",area);
		printf ("Deseas continuar? (1=si, 0=no) ");
		scanf ("%d",&continuar);
		
	}
	while (continuar==1);
	return 0;
	
}
