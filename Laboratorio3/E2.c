#include<stdio.h>
int main(){
    char oracion[100];
    int a=0;
    int palabras=0;
    printf("Ingrese cadena\n");
    gets(oracion);

    while(oracion[a]!='\0'){
        if(oracion[a]=!' '){
            espacio++;
            a++;
        }else{
            a++;
        }
    }
    printf("La cantidad de espacios que hay es: %d\n",espacio);


}