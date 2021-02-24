#include <stdio.h>

void suma(float R1, float I1, float R2, float I2)
{
	float Real, Imaginaria;
	Real=R1+R2;
	Imaginaria=I1+I2;
	
	If (Imaginaria<0);
	{
		printf("%f%fi",Real,Imaginaria);
	}
	else
	{
		printf("%f+%fi",Real,Imaginaria);
	}
	system("pause");
	
}

void multiplicacion(float R1, float I1, float R2, float I2)
{
	float Real, Imaginaria;
	Real=(R1*R2)+(R1*I2);
	Imaginaria=(I1*I2)+(I1*R2);
	
	printf("%f+%fi^2",Real,Imaginaria);
	system("pause");
}

void division(float R1, float I1, float R2, float I2)
{
	
}

void conjugado(float R, float I)
{
	float Real, Imaginaria;
	Real=R1;
	Imaginaria=I1*-1;
	
	If (Imaginaria<0)
	{
		printf("%f%fi",Real,Imaginaria);
	}
	else
	{
		printf("%f+%fi",Real,Imaginaria);
	}
	system("pause");
}

int menu()	
{
	int opcion;
	printf("Calculos con complejos\n\n");
	printf("1.Suma\n");
	printf("2.Multiplicacion\n");
	printf("3.Division\n");
	printf("4.Conjugado\n");
	printf("5.Salir\n");
	
	do
	{
		printf("Opcion");
		scanf("%d,&opcion);
	}
	while(!(opcion>>=1 && opcion<=5));
	return opcion;
}

int menu()
{
	int opcion;
	float R1,I1.R2,I2;
	//Portada()
	do
	{
		//primer numero
		opcion=menu();
		printf("Numero 1, parte real");
		scanf("%f",&R1),
		printf("Numero 1, parte imaginaria");
		scanf("%f",&I1);
		
		//segundo numero
		if(opcion!=4)
		{
			printf("Numero 2, parte real");
		scanf("%f",&R2),
		printf("Numero 2, parte imaginaria");
		scanf("%f",&I2);
		}
		
		switch (opcion)
		{
			case 1:
				suma(R1,I1,R2,I2);
				break;
			case 2:
				multiplicacion(R1,I1,R2,I2);
				break;
			case 3:
				division(R1,I1,R2,I2);
				break;
			case 4:
				conjugado(R1,I1);
				break;
			//No se pone el 5 por que ese caso no hace nada
		}//Fin switch
	
	}
	while(opcion!=5);
	
	printf("Gracias por participar");
	System ("pause");
	
}//Fin main

/* void=int
	main es la ultima funcion que se pone, por que las otras funciones deben estar definidas antes
	!=No, mientras que no se cumpla la condicion
	
*/
