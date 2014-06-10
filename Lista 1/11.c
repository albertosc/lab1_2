//Faça um Programa que leia o tamanho de um lado do quadrado e calcule sua área, em seguida mostre o dobro desta área para o usuário
int main(){
	int lado, area;
	scanf("%d", &lado);
	area=lado*lado;
	printf("%d", area*2);
	return(0);
}