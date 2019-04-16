#include <stdio.h>
/* Implementar la funcion de Fibonacci */
int main(){
	/*Creamos las variables*/
	int numero;
	/*Ingresamos el numero y lo capturamos*/
	printf("Ingresar numero fibonaci\n");
	scanf("%i",&numero);
	/*Ya que no existe Fibonacci de numeros negativos ponemos la siguiente condicion*/
	/*En la segunda condicion ponemos las primeras condiciones del cero y el uno*/

	if(numero>=0)
	{
		if(numero<=1)
		{
			if(numero==0){
				printf("Su numero fibonaci es:\n%i",0);
			}else{
				printf("Su numero fibonaci es:\n%i",1);
			}
		}else
		{
			/*Ponemos los dos fibonacci para seguir el buble, el numero fibonacci es la suma de los anteriores
			que previamente inicializamos "preFibo" y "fibo"*/
			int fibo=1;
			int preFibo=1;
			for (int i = 2; i < numero; ++i)
			{
			int temporal=fibo;
			fibo+=preFibo;
			preFibo=temporal;
			}
			printf("Su numero fibonaci es:\n%i",fibo);
		}
	}else
	{
		printf("Su numero fibonaci no existe.\n");
	}

}