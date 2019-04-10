/*EJERCICIO 3*/
/*Escribir un programa que cuente los espacios en blanco, tabuladores y saltos de linea*/
#include <stdio.h>
#include <string.h>
int main(){
    /*Declaramos las variables*/
    short a = 0;
    short espacio = 0, tabulaTem = 0, tabulacion = 0;
    char cadena[100];
    
    /*Capturamos la cadena*/
    printf("Ingrese cadena\n");
    gets(cadena);
    

    /*Como toda cadena termina en '\0', el bucle finalizara al finalizar la cadena*/
    
    while (cadena[a] != '\0')
    {
        //Si el caracter esta vacio es espacio
        if (cadena[a] == ' ')
        {
            espacio++;
            //Si el siguiente caracter esta vacio, podria ser tabulacion
            if (cadena[a + 1] = ' ')
            {
                tabulaTem++;
                a++;
                //Si se afirmo por 3 veces que estaba vacio es tabulacion
                if (tabulaTem % 3 == 0)
                {
                    tabulacion = tabulacion + tabulaTem / 3;
                    tabulaTem = 0;
                }
            }
            else
            {
                tabulaTem = 0;
                a++;
            }
            a++;
        }
        else
        {
            a++;
        }
    }
    printf("La cantidad de espacios es:%i\n", espacio);
    printf("La cantidad de tabulaciones es:%i\n", tabulacion);
    return 0;
}
