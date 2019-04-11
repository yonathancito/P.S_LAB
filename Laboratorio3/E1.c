#include<stdio.h>
int main(){
    char oracion[100];
    int a=0;
    int espacio=0;
    int palabras=0;
   
    printf("Ingrese cadena\n");
    gets(oracion);

    char letras[100];
    
    while(oracion[a]!='\0'){
        if(oracion[a]==' '&&oracion[a+1]!=' '){
            espacio++;
            a++;
        }else{
            a++;
        }
    }
    palabras=espacio+1;
    printf("La cantidad de espacios que hay es: %d\n",espacio);
    printf("La cantidad de palabras que hay es: %d\n",palabras);
    printf("cantidad de letras: %d\n",a);

    int mayorRepeticion=0;
    char letraMasRepetida;

    for(int i = 0; i < a; i++){
        char letraActual=oracion[i];
        int contador=0;
        for(int j = 0; j < a; j++){
            if (letraActual==oracion[j]){
                contador++;
            }
        }
        if(mayorRepeticion<contador){
            mayorRepeticion=contador;
            letraMasRepetida=letraActual;
        }
    }
    printf("Letra mas repetida\n%c",letraMasRepetida); 
    printf("Cantidad de veces que se repitio:\n%i",mayorRepeticion);
    
    
}