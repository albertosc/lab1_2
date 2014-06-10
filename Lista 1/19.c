//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Com roubo do governo!
int main(){
	int valor, horas, salario, inss, sindicato, imposto, salarioLiq;
	printf("Digite o valor que vc ganha por hora e quantas horas que trabalha no mes\n", a+b);
	scanf("%d", &valor);
	scanf("%d", &horas);
	salario=valor*horas;
	inss=salario*0.08;
	sindicato=salario*0.05;
	imposto=salario*0.11;
	salarioLiq=salario-inss-sindicato-imposto;
	printf("Salario Bruto = %d\n", salario);
	printf("INSS = %d\n", inss);	
	printf("Sindicato = %d\n", sindicato);
	printf("Salario Liquido = %d\n",salarioLiq);
	return(0);
}