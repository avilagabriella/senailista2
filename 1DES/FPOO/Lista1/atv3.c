#include <stdio.h.>
int main(){
	
	char nome[10] // criar variavel "nome" podendo ter 30 bits
    float salario; // criar variavel "salario"
    int salario2;// criar variavel "salario2"
    int reajuste;// criar variavel "reajuste"
    
	printf("coloque o nome do seu funcionario:");//colocar um nome para ser o funcionario
	scanf("%s",&name);// registra o nome do usuario em variavel "nome"
	
	printg("Informe o salario do funcionario:";)//colocar um quantia como salario para o funcionario
	scanf("%f" ,&salario); //registrar o salario do usuario na variavel "salario"
	
	printf("Informe o reajuste (%%):"); //colocar um valor
	printf("%d" ,&reajuste);//registrar na variavel "reajuste"
	
	salario2 = (salario*(reajuste+100))100;// realiza a conta e armazena na variavel "salario2"
	
	printf("Ola, %s. \nSeu novo salario e: %d", nome, salario2); // vai aparecer seu novo salario de acordo co a porcentagem
		return o;	
}
