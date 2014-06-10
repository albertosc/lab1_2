#include<stdio.h>
#include <string.h>

int palindromo(int num);

int main(){
	int i,j, maior=0, var1, var2;
	for(i=1;i<1000;i++)
		for(j=1;j<1000;j++){
			if(maior<i*j && palindromo(i*j)){
				maior=i*j;
				var1=i;
				var2=j;
			}
	}
	printf("O maior palindromo entre dois numeros de 3 digitos eh:%d * %d = %d", var1, var2, maior);
}

int palindromo(int num){
	char numString[6];
	int tam, i;
	sprintf(numString, "%i", num);
	tam=strlen(numString);
	for(i=0;i*2<tam-1 ; i++)
		if(numString[i]!=numString[tam-i-1]){
			return 0;
		}
	return 1;
}
