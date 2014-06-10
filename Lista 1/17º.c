/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7*h) - 58
Para mulheres: (62.1*h) - 44.7 (h = altura)
Peça o peso da pessoa e informe se ela está dentro, acima ou abaixo do peso.*/
#include <stdio.h>
int main()
{
	float peso,altura,resultado;
	char sexo[15];
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	printf("Digite seu peso:");
	scanf("%f",&peso);
	printf("\nDigite seu sexo M ou F: ");
	scanf("%s",&sexo);
	if (sexo == 'masculino') {
		resultado=((72.7*altura) - 58);
		if (peso>resultado)
			printf("Seu Peso ideal = %f",resultado,"Voce esta acima do peso ideal"); 
		if (peso<resultado)
			printf("Seu Peso ideal = %f",resultado,"Voce esta abaixo do peso ideal");
		else
			printf("Seu Peso ideal = %f",resultado,"Voce esta no peso ideal");
		
}
	else{
		resultado=((62.1*altura) - 44.7);
		if (peso>resultado)
			printf("Seu Peso ideal = %f",resultado,"Voce esta acima do peso ideal"); 
		if (peso<resultado)
			printf("Seu Peso ideal = %f",resultado,"Voce esta abaixo do peso ideal");
		else
			printf("Seu Peso ideal = %f",resultado,"Voce esta no peso ideal");
}
	return(0);
}

