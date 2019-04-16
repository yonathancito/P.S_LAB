#include <stdio.h>
/*1) Implementar la busqueda binaria.
 INPUT: Ingreso desordenado de numeros, el numero a buscar
 OUTPUT: Indicar si se encuentra o no el numero, y la posición
 Obs: se puede usar arreglos.*/
int main(){
	/*Creamos las variables, ingresamos la cantidad de numeros y lo capturamos*/
	int cantidad,temporal,numero_buscar,respuesta=0,posicion;
	printf("Ingrese cantidad de numeros\n");
	scanf("%i",&cantidad);

	/*Ingresamos en el arreglo la cantidad y los numeros correspondientes*/
	int numeros[cantidad];
	for (int i = 0; i < cantidad; ++i)
	{
		printf("Ingrese valor:%i\n",i+1);
		scanf("%i",&temporal);
		numeros[i]=temporal;
	}
	/*Ingresamos el numero que se buscara y comparara con todos los numeros del arreglo
	hasta encontrarlo y guardara su ubicacion*/
	printf("Ingrese el numero a Buscar\n");
	scanf("%i",&numero_buscar);
	for (int i = 0; i < cantidad; ++i)
	{
		if(numero_buscar==numeros[i])
		{
			respuesta++;
			posicion=i+1;
		}

	}
	if(respuesta>0)
	{
		printf("Se encontro su numero\n");
		printf("La posicion donde se encuentra es:%i\n",posicion);
	}else
	{
		printf("No se encontro su numero\n");
	}

    return 0;

}
