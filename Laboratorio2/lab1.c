#include <stdio.h>
int main(){
    printf("Hola Mundo\n");

    float altura,area,base;

    printf("Introduzca Base: ");
    scanf("%f",&base);

    printf("Introduzca Altura: ");
    scanf("%f",&altura);

    area=base*altura/2;
    printf("El area del triangulo es: %f",area);
    return 0;
}