#include <stdio.h>

int main(){
    int N1,N2;
    printf("Ingrese N1\n");
    scanf("%d",&N1);
    printf("Ingrese N2\n");
    scanf("%d",&N2);

    if (N1>N2) {
        printf("El numero Mayor es:%d",N1);
    }else{
        printf("El numero Mayor es:%d",N2);
    }
    return 0;
}