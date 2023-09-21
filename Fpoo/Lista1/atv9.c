#include <stdio.h>

int main(void){
	char nome[20]; 
	float preco; 
	float valor; 
	
	printf("Produto que deseja: "); 
	scanf("%s", &nome); 
	
	printf("Preco do produto: R$"); 
	scanf("%f", &preco); 
	
	valor = preco * 1.05; 
	
	printf("Com 5%% de aumento o produto %s esta R$%.02f", nome, valor); 
}
