/*laboratorioA-PS*/
/*EJERCICIO 1*/
/*Convertir Grados celsius a farenheit*/
#include <stdio.h>
int main()
{
    /*Declaramos las variables*/
    float celcius, farenheit;

    /*Pedimos el dato y lo escaneamos*/
    printf("Ingrese Grados celcius:\n");
    scanf("%f", &celcius);

    /*hacemos la convercion*/
    farenheit = (celcius * (1.8)) + 32;

    /*Imprimimos*/
    printf("%f", farenheit);
    return 0;
}