#include <stdio.h>

//Portada
int Portada ()
{
	printf("				Programa que calcula el area de un poligono regular \n\n"); 
	printf("						Programacion I \n");
	printf("					Gomez Gonzalez Astrid Yoatziry \n");
	printf("						1104	 MAC \n\n\n");
	system ("Pause"); 
}

//Programa principal
int main()
{
	float num_lados, base, altura, lado, apotema, perimetro, area; int continuar;
	Portada();
	do
	{
		printf ("Ingresa el numero de lados de tu poligono ");
		scanf ("%f",&num_lados);
		if (num_lados==3)//triangulos
		{
			printf ("Ingresa la base del triangulo ");
			scanf ("%f",&base);
			printf ("Ingresa la altura del triangulo ");
			scanf ("%f",&altura);
	
			area=(base*altura)/2;	
		}
		else if (num_lados==4)//cuadrados
		{
			printf ("Ingresa la base del cuadrilatero ");
			scanf ("%f",&base);
			printf ("Ingresa la altura del cuadrilatero ");
			scanf ("%f",&altura);
	
			area=(base*altura);
		}
		else if (num_lados>4)//otros
		{
			printf ("Ingresa el tamaño de un lado ");
			scanf ("%f",&lado);
			printf ("Ingresa el apotema ");
			scanf ("%f",&apotema);
			
			perimetro=lado*num_lados;
			area=(perimetro*apotema)/2;
		}
		else 
		{
			printf ("Tu poligono no es valido ");
		}
		//datos de salida
		printf("El area de tu poligono es %f \n\n",area);
		printf ("Deseas continuar? (1=si, 0=no) ");
		scanf ("%d",&continuar);
		
	}
	while (continuar==1);
	return 0;
	
}
