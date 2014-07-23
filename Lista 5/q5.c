#include <stdio.h>

int soma_valor(int *a, int b){
	int temp;
	temp=(*a+b);
	*a=temp;
}

int main(){
	int a,b;
	printf("digite dois numeros:");
	scanf("%d %d", &a,&b);
	printf("valores digitados: A=%d e B=%d", a,b);
	soma_valor(&a,b);
	printf("\nvalores apos a funcao: A=%d e B=%d", a,b);
	return 0;
}
