#include <stdio.h>

int main(){
    int a=4;
    int arreglo[4]={1,2,3,5};
    int tamano[a];
    for(int i = 0; i < sizeof(tamano); i++){
        tamano[i]=8;
        printf("%i\n",tamano[i]);
    }
    return 0;

}