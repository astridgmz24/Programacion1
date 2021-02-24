#include <stdio.h>

int Portada () 
{
	printf("			               	Programa que hace operaciones \n\n"); 
	printf("						Programacion I \n");
	printf("					Gomez Gonzalez Astrid Yoatziry \n");
	printf("						1104	 MAC \n\n\n");
	system ("Pause"); 
}

void cuadrado(float numero)
{
	float cuadrado;
	
	cuadrado=numero*numero;
	printf("Cuadrado= %f\n",cuadrado);
	system("pause");
}

void cubo(float numero)
{
	float cubo;
	
	cubo=numero*numero*numero;
	printf("Cubo= %f\n",cubo);
	system("pause");
}

void valor_absoluto(float numero)
{
	float vabs;
	
	if (numero<0)
	{
		vabs=(numero*-1);
		printf("Valor absoluto= %f\n",vabs);
	}
	else
	{
		vabs=numero;
		printf("Valor absoluto= %f\n",vabs);
	}
	system("pause");
}

int menu()
{
	int opcion;
	
	printf("Operaciones \n\n");
	printf("1.Cuadrado \n");
	printf("2.Cubo \n");
	printf("3.Valor Absoluto \n");
	printf("4.Salir \n");
	
	do
	{
		printf("Opcion");
		scanf("%d",&opcion);
	} while (!(opcion>=1 && opcion<=4));
	
	return opcion;
}

int main()
{
	int opcion;
	float numero;
	
	Portada();
	
	do
	{
		opcion=menu();
				
		switch (opcion)
		{
			case 1:
				printf("Ingresa el numero ");
				scanf("%f",&numero);
				cuadrado(numero);
				printf("\n\n");
			break;
		
			case 2:
				printf("Ingresa el numero ");
				scanf("%f",&numero);
				cubo(numero);
				printf("\n\n");
				break;
		
			case 3:
				printf("Ingresa el numero ");
				scanf("%f",&numero);
				valor_absoluto(numero);
				printf("\n\n");
				break;
		}//switch .77	
			
	}while(opcion!=4);
	
	printf("Gracias por participar\n");
	system("pause");
}

