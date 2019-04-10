#include<stdio.h>
#include<string.h>
int main(){
    short largo,i,a=0;
    char cadena [50];
    printf("Ingrese cadena\n");
    gets(cadena);
    largo=strlen(cadena);

    while(cadena[a]!='\0'){
        if(cadena[a]==' '&&cadena[a+1]==' '){
            for(i = a; i < largo; i++){
                cadena[i]=cadena[i+1];
            }
            largo--;
        }
        a++;
    }
    printf("La cadena es:\n");
    puts(cadena);
    return 0;
}
