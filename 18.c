/* 18� Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho. 
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo 
(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. Jo�o precisa que voc� fa�a um programa que leia a 
vari�vel peso (peso de peixes) e verifique se h� excesso. Se houver, gravar na vari�vel excesso e na vari�vel multa 
o valor da multa que Jo�o dever� pagar. Caso contr�rio mostrar tais vari�veis com o conte�do ZERO.
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
	
