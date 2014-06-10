/* 18º João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. 
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo 
(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a 
variável peso (peso de peixes) e verifique se há excesso. Se houver, gravar na variável excesso e na variável multa 
o valor da multa que João deverá pagar. Caso contrário mostrar tais variáveis com o conteúdo ZERO.
*/
#include <stdio.h>

int main(){
	int quilos=0,excesso,multa;
	printf("Digite a quantidade de quilos de peixes:\n-->");
	scanf("%d",&quilos);
	if (quilos>50){	
		excesso=(quilos-50);
		multa=excesso*4;
		printf("Excesso de quilos = %d",excesso);
		printf("\nMulta a pagar = %d \n",multa);
	}
	else
		printf ("Excesso= 0 \nMulta a pagar = 0\n");
	system("pause");
}
	
