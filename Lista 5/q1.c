#include <stdio.h>

int trocavalor(int x,int y){
	int aux;
	aux= x;
	x=y;
	y=aux;
	printf("\nOs valores trocados sao: A=%d e B=%d", x,y);
	return 0;
}

int main(){
	int a,b;
	printf("digite dois numeros inteiros:");
	scanf("%d %d", &a,&b);
	printf("valores digitados: A=%d e B=%d", a, b);
	trocavalor(a,b);
	return 0;
	
}

