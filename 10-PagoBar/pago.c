#include <stdio.h>

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
	char sexo;
	int edad;
	float pago;
	
	do
	{
		printf("Introduce m=mujer o h=hombre \n");
		fflush(stdin);
		scanf("%c",&sexo);
	} 
	while(sexo!='m' && sexo!='h');
	
		printf("Introduce tu edad \n");
		fflush(stdin);
		scanf("%d",&edad);
		
		if(sexo=='m')
		{
			if(edad<18)
			{
				pago=0;
			}
			else
			{
				pago=100;
			}	
		}
		else
		{
			if(edad<15)
			{
				pago=50;
			}
			else
			{
				pago=150;
			}	
		}
		printf("El pago es igual a %f \n",pago);
		system("pause");

	
}

/* char=1 solo caracter
*/
