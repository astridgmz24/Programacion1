#include <stdio.h>

int Portada () 
{
	printf("				Programa que calcula la categoria del maraton \n\n"); 
	printf("						Programacion I \n");
	printf("					Gomez Gonzalez Astrid Yoatziry \n");
	printf("						1104	 MAC \n\n\n");
	system ("Pause"); 
}


int main()
{
	portada();
	char sexo;
	int edad, continuar;
	
	do
	{
		do
		{
			printf("Introduce m=mujer o h=hombre");
			fflush(stdin);
			scanf("%c",&sexo);
		}
		while (sexo!='m' && sexo!='h');
		
		printf("Introduce tu edad");
		scanf("%d",&edad);
		
		if (sexo=='m')
		{
			if (edad>=18 && edad<=19)
			{
				printf("Categoria Junior Femenina \n");
				printf("Hora de competencia 6:25 \n");
			} 
			else
			{
				if (edad>=20 && edad<=34)
				{
					printf("Categoria Libre Femenina \n");
					printf("Hora de competencia 6:15 \n");
				}
				else
				{
					if (edad>=35 && edad<=39)
					{
						printf("Categoria Master Femenina \n");
						printf("Hora de competencia 6:35 \n");
					}
					else
					{
					printf("Edad no valida para competir \n");
					}
				}
			}
		}
		else
		{
			if (sexo=='h')
			{
				if (edad>=18 && edad<=19)
				{
					printf("Categoria Junior Masculina \n");
					printf("Hora de competencia 6:20 \n");
				}
				else 
				{
					if (edad>=20 && edad<=34)
					{
						printf("Categoria Libre Masculina \n");
						printf("Hora de competencia 6:00 \n");
					}
					else
					{
						if (edad>=35 && edad<=39)
							{
							printf("Categoria Master Masculina \n");
							printf("Hora de competencia 6:30 \n");
							}
						else
						{
						printf("Edad no valida para competir \n");
						}
					}
				}
			}
		}
		
		system("pause");
		
		printf("¿Deseas ingresar otros datos? (1=si, 0=no)");
		scanf("%d",&continuar);
		
	} while (continuar==1);
	
	return 0;
}

