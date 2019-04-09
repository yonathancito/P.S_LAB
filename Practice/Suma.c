#include <stdio.h>
int main(){
    int num1;
    int num2;
    int resultado;
    printf("Ingrese el primer Valor\n");
    /*scanf Tiene 2 argumentos:
    tipo de dato -> %d -> entero decimal
    Variable donde se almacenara el valor antecedida de & ->&Variable 
    */
    scanf("%d",&num1);
    printf("Ingrese el segundo Valor\n");
    scanf("%d",&num2);

    resultado=num1%num2;

    printf("El resultado es:\n%d",resultado);
    return 0;

}