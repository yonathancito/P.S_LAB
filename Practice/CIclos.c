#include <stdio.h>
int main(){
    int contador;
    int contador2=1;
    for(contador = 1; contador <= 5; contador++){
        printf("Contador%i\n",contador);
    }
    while(contador2<5){
        printf("-->%i\n",contador2);
        contador2++;
    }    
    return 0;
}
