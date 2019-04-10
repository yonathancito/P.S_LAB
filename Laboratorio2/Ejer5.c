/*EJERCICIO 5*/
/*Escribir un programa de determine los limites de los distintos tipos de datos en C
    :char,short,int,long con y sin signo*/
#include<stdio.h>
int main(){
    char a;
    printf("Ingrese tipo de dato:\n");
    scanf("%c",&a);
    if(a=='c'){
        printf("El char tiene tamano de 1 byte y va de 0 a 255\n");
    }
    if(a=='s'){
        printf("El short tiene tamano de 2 bytes y va de -128 a 127\n");
    }
    if(a=='i'){
        printf("El int tiene tamano de 2 bytes y va de -32768 a 32767\n");
    }
    if(a=='l'){
        printf("El long tiene tamano 4 bytes y va de -2147483648 a 2147483647\n");
    }
    
    return 0;
}
