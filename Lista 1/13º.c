/*Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.
C = (5 * (F-32) / 9).*/
#include <stdio.h>
int main() 
{
	float fa;
	printf("Digite a temperatura em Farenhit:\n--> ");
	scanf("%f",&fa);
	printf("Temperatura em graus Celcius = %f",(5*(fa-32)/ 9));
	return(0);
}

