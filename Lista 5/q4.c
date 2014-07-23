#include<stdio.h>

int le_notas(float *a,float *b){
	printf("digite duas notas:");
	scanf("%f %f", a, b);
	
}

int calc_media(float n1,float n2, float *media_s,float *media_p){
	*media_s= (n1+n2)/2;
	*media_p= (n1+(n2*2))/3;
	
}

int  exibe_dados(float n1,float n2,float media_s,float media_p){
	printf("\nvalores digitados: %f e %f", n1,n2);
	printf("\nvalor da media simples: %f",media_s);
	printf("\nValor da media ponderada: %f", media_p);
}
int main(){
	float a,b,media_simples,media_pond;
	le_notas(&a,&b);
	printf("%f e %f", a,b);
	calc_media(a,b,&media_simples,&media_pond);
	exibe_dados(a,b,media_simples,media_pond);
	return 0;
	
}
