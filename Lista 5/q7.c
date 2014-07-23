#include <stdio.h>

int frac(float num, int *inteiro,float *fraci){
	*inteiro=num;
	printf("\nA parte inteira eh: %d", *inteiro);
	*fraci=num-(*inteiro);
	printf("\nA parte fracionaria eh: %f", *fraci);
}
int main(){
	float num,fraci;
	int inteiro;
	printf("digite um numero real:");
	scanf("%f",&num);
	frac(num,&inteiro,&fraci);
	return 0;
	
}
