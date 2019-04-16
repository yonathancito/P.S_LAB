#include <stdio.h>
#include <string.h>
/*Escriba un programa que quite los espacios en blanco que estan demas y corrija el uso de las mayusculas por ejemplo:
 INPUT: Mi-mama--me-Mima--. --
 OUTPUT: Mi-mama-me-mima.*/
int main(){

	/*Creamos la variable cadena inicial y las variables*/
	char cadena[100];
	int iterador=0,largo,iterador2=0;
	
	/*Ingresamos la cadena inicial*/
	printf("Ingrese cadena\n");
	gets(cadena);
	/*Luego estraemos la longitud de la cadena*/
	largo=strlen(cadena);
	/*Para crear finalmente la cadena respuesta*/
	char cadena2[largo];

	/*Recorremos la cadena y en cada iteracion revisamos si tiene mas de dos espaciados no los cuente
	*/
	for (int i = 0; i <=largo; ++i)
	{
		if (cadena[iterador]==' '&&cadena[iterador+1]==' ')
		{
			iterador++;
		}else
		{
			/*Ahora una vez que nos aseguramos que no hay espacios de mas
			revisamos mediante el codigo Ascii si son mayusculas 
			con un simple casteo a int
			para luego convertir todas las mayusculas a minusculas*/
			int Ascii_M=cadena[iterador];
			if(Ascii_M>=65 && Ascii_M<=90 )
			{
				char Ascii_m=Ascii_M+32;
				cadena2[iterador2]=Ascii_m;
				iterador2++;
				iterador++;

			}else{
				cadena2[iterador2]=cadena[iterador];
				iterador2++;
				iterador++;
			}
			
		}
	}
	/*Como la letra inicial es siempre mayuscula la convertimos*/
	/*Para finalmente imprimir nuestra nueva cadena con la funcion puts*/
	int Ascii_m=cadena2[0];
	char Ascii_M=Ascii_m-32;
	cadena2[0]=Ascii_M;
	puts(cadena2);
}