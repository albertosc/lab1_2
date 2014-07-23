#include <stdio.h>

int trocavalor(int x,int y, int z){
	int aux;
	if ((x=y) && (y=z) && (x=z)){
		return 1;
	else{
		if ((x>y)&& (x>z)){
			if(y>z){
				aux=x;
				x=z;
				z=aux;
			}
			else{
				aux=x;
				x=z;
				z=aux;
				
				aux=x;
				x=y;
				y=x;
			}
		
		}
		if((y>x) && (y>z)){
			if(x>z){
				aux=y;
				y=z;
				z=aux;
				
				aux=x;
				x=y;
				y=aux
			}
			else{
				aux=y;
				y=z;
				z=aux;
			}
			
		}
		if((y>x) && (y>z)){
			if(x>z){
				aux=y;
				y=z;
				z=aux;
				
				aux=x;
				x=y;
				y=aux
			}
			else{
				aux=y;
				y=z;
				z=aux;
			}
		}
	}
		
	return 0;
}

int main(){
	int a,b,c;
	printf("digite tres numeros inteiros:");
	scanf("%d %d %d", &a,&b,&c);
	printf("valores digitados: A=%d , B=%d e C=%d", a, b,c);
	trocavalor(a,b,c);
	return 0;
	
}

