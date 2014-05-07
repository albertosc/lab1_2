/*Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.*/
#include <stdio.h>
int main()
{
	float c;
	printf("Digite a temperatura em graus Celcius:\n--> ");
	scanf("%f",&c);
	printf("A temperatura em Graus Farenheit = %f",(c*9/5)+32);
	return(0);
}

