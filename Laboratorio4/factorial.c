#include <stdio.h>
/*Factorial iterativo*/
int main(){
	/*Creamos las variables ingresamos el numero y lo capturamos*/
	int factorial,respuesta=1,temporal;
	printf("Ingrese un numero:\n");
	scanf("%d",&factorial);
	temporal=factorial;
	/*Ya que no existe factorial de un numero negativo*/
	if(factorial<0)
	{
		printf("Numero no valido\n");
	}else
	{
		while(factorial>0)
		{
			/*Guardamos la primera multiplicacion en la variable "Respuesta" 
			y disminuimos el numero factorial para la siguiente iteracion*/
			respuesta*=factorial;
			factorial--;
		}
	}
	printf("El factorial de: %d es: %d\n",temporal,respuesta);

}