#include<stdio.h>
int numeroMaximo (int arr[]){
    int max=0, min=0;
    nim = arr[0];
    max = arr[0];

    for(int i = 0; i < sizeof(arr); i++){
       if(min>arr[i]){
           min=arr[i];
       }
       if(max<arr[i]){
           max=arr[i];
       }
    }
    return min;
}

int main(){
    int cantidadNumeros;

    printf("Ingrese cantidad de numeros: \n");
    scanf("%i/n",&cantidadNumeros);
    
    int numerosEvaluar [cantidadNumeros];
    int numerosEvaluados [cantidadNumeros];

    int respuesta=1;
    int numeroTemporal;


    for(int i = 0; i < cantidadNumeros; i++){
        printf("Ingrese numero\n",i+1);
        scanf("%i",&numeroTemporal);
        numerosEvaluar[i]=numeroTemporal;
    }
    for(int i = 0; i < cantidadNumeros; i++){
        printf("%i\n",numerosEvaluar[i]);
    }
}
