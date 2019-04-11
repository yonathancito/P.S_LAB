#include<stdio.h>
int main(){
    char oracion[100];
    int a=0,a2=0,a3=0;
    int espacio=0;
    int palabras=0;
    int contadorEspacio=0;
    printf("Ingrese cadena\n");
    gets(oracion);

    char letras[100];
    
    while(oracion[a]!='\0'){
        if(oracion[a]==' '&&oracion[a+1]!=' '){
            espacio++;
            a++;
        }else{
            a++;
            a2++;
        }
    }
    palabras=espacio+1;
    printf("La cantidad de espacios que hay es: %d\n",espacio);
    printf("La cantidad de palabras que hay es: %d\n",palabras);
    printf("cantidad de letras: %d",a);

    for(int i = 0; i < a; i++){
        int contador=0;
        char caracter=' ';
        caracter=oracion[i];
        for(int j = 0; j < a; j++){
            if (caracter==oracion[j]&&oracion[j]!=' '){
                contador++;
            }
        }
        printf("\n%i",contador);
    } 
}