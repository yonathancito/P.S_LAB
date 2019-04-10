#include <stdio.h>
/*
#include "Nombre del archivo"
Buscara el archivo en el directorio local
#define 
Crea constantes simbolicas y macros
*/
#define PI 3.1415
/*
Macro, como una funcion, pero es mas rapido
ya que se ahorra el llamado a una funcion
*/
#define CUBO(a)a*a*a

int main(){
    int suma;
    suma=PI+3;
    printf("%i\n",suma);
    int a=3;
    printf("%i\n",CUBO(a));
    return 0;
}
