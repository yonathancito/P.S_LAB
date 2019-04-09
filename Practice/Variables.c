#include <stdio.h>
int main(){
    char C='c'; //tamaño de 1 byte 0.. 255
    printf("%c\n",C);
    int i=4; // Tamaño 2 byte -32768.. 32767
    printf("%i\n",i);
    short s=-1; //Tamaño 2 byte -128..127
    printf("%i\n",s);
    /*No contiene datos negativos*/
    unsigned int u=25; //tamaño 2 byte 0..65535
    printf("%i\n",u);
    long l=5935; // tamaño 4 byte -2147483648..2147483647
    printf("%li\n",l);
    /*Numeros reales*/
    float f=72.534; // tamaño 4 byte 
    printf("%.2f\n",f);
    double d=12222.3332;// tamaño 8 bytes 
    printf("%lf\n",d);


    return 0;
}
