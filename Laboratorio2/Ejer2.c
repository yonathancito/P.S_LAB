/*EJERCICIO 2*/
/*Calcular la mediana de un conjunto de numeros*/
#include <stdio.h>
int main(){
    
    /*Declaramos las variables*/
    int respuesta=0;
    int tempo2=0;
    int cNumeros;

    /*Ingresamos la cantidad de numeros*/
    printf("ingrese cantidad de numeros:\n");
    scanf("%i", &cNumeros);

    /*Creamos el Arreglo*/
    int arreglo[cNumeros];

    /*Scaneamos los numeros en el Arreglo*/
    for (int i = 0; i < cNumeros; i++)
    {
        int tempo = 0;
        printf("Ingrese Numero:\n", i + 1);
        scanf("%i", &tempo);
        arreglo[i] = tempo;
    }

    /*Ordenamos los numeros con el metodo burbuja*/
    for (int i = 0; i < cNumeros - 1; i++)
    {
        for (int j = 0; j < cNumeros - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                int tempo = arreglo[j + 1];
                arreglo[j + 1] = arreglo[j];
                arreglo[j] = tempo;
            }
        }
    }
    
    /*Sacamos la mediana*/
    /*Si la cantidad de numeros es par, la mediana es la suma de los numeros del medio entre 2  */
    if(cNumeros%2==0){
        tempo2=cNumeros/2;
        respuesta=(arreglo[tempo2]+arreglo[tempo2+1])/2;
    }else{
        /*Si la cantidad de numeros es impar, la mediana es el numero del medio*/
        tempo2=cNumeros/2;
        respuesta=arreglo[tempo2+1];
    }
    
    printf("La mediana es: %i\n",respuesta);
    return 0;
}