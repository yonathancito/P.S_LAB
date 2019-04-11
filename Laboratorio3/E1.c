#include <stdio.h>
int main()
{
    /*Creamos el arreglo de caracteres*/
    char oracion[100];
    /*Se crea la variable que pivoteara a lo largo del arreglo*/
    int a = 0;
    /*Se crea las variables donde ira la cantidad de espaciosy letras que haya*/
    int espacio = 0;
    int palabras = 0;
    /*Ingresamos la oracion*/
    printf("Ingrese cadena\n");
    gets(oracion);
    
    /*Mientras el ultimo caracter sea diferente de null*/
    while (oracion[a] != '\0')
    {
        /*Contara los espacios y si hay mas de un espacio lo tomara como uno*/
        if (oracion[a] == ' ' && oracion[a + 1] != ' ')
        {
            espacio++;
            a++;
        }
        else
        {
            a++;
        }
    }
    /*La cantidad de palabras siempre sera uno mas que los espacios */
    palabras = espacio + 1;
    printf("La cantidad de espacios que hay es: %d\n", espacio);
    printf("La cantidad de palabras que hay es: %d\n", palabras);

    /*Para poder saber la letra mas repetida inicializaremos estas variables*/
    int mayorRepeticion = 0;
    char letraMasRepetida;
    /*Recorremos todo el arreglo dos veces para saber que letra se repite mas*/
    for (int i = 0; i < a; i++)
    {
        /*Guardamos la letra actual*/
        char letraActual = oracion[i];
        int contador = 0;
        /*Esa letra actual la comparamos con todo el arreglo*/
        for (int j = 0; j < a; j++)
        {
            /*Si la letra actual coincide con la letra recorrida */
            if (letraActual == oracion[j])
            {
                contador++;
            }
        }
        /*Aqui guardamos la cantidad mayor de veces que se repite la letra y la letra*/
        if (mayorRepeticion < contador)
        {
            mayorRepeticion = contador;
            letraMasRepetida = letraActual;
        }
    }
    printf("Letra mas repetida: %c", letraMasRepetida);
    printf("\nCantidad de veces que se repite: %i", mayorRepeticion);
}