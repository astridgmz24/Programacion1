#include <stdio.h>

//Portada
int Portada ()
{
	printf("				Programa que calcula el perimetro de un rectangulo \n\n"); 
	printf("						Programacion I \n");
	printf("					Gomez Gonzalez Astrid Yoatziry \n");
	printf("						1104	 MAC \n\n\n");
	system ("Pause");
}

//Programa principal

int main()
{
	float base, altura, perimetro; int continuar;
	Portada();
	do
	{
		printf ("Ingresa la base del rectangulo ");
		scanf ("%f",&base);
		printf ("Ingresa la altura del rectangulo ");
		scanf ("%f",&altura);
		
		perimetro=base+base+altura+altura;
	
		printf("El perimetro del rectangulo es %f \n\n",perimetro);
		printf ("Deseas continuar? (1=si, 0=no) ");
		scanf ("%d",&continuar);
		
	}
	while (continuar==1);
	return 0;
	
}
