#include <stdio.h>

int trocavalor(int x,int y){
	int aux;
	if (x> y){
		printf("\nOs valores em ordem sao A=%d e B=%d", x,y);	
	}
	else{
	
		if (x<y){
			aux= x;
			x=y;
			y=aux;
			printf("\nOs valores em ordem sao: A=%d e B=%d", x,y);
		}
		else
			printf("\nOs valores sao: A=%d e B=%d", x,y);
	}
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

