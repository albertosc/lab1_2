// Escreva um programa que leia duas strings e as coloque na tela. Imprima também a segunda letra de cada string //
#include <stdio.h>
#include <string.h>
int main()
{
	char *s,*r;
	printf("Digite duas palavras\n");
	scanf("%c\n%c",s,r);
	printf("%c%c",s[2],r[2]);
	return(0);
}
