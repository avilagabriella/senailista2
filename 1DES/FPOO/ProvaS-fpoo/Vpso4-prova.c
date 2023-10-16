#include <stdio.h>
#include <string.h>
int main(){
	float item, custo, porcentagem;
	char nomes[30];
	int i, valor;
	

	printf("Informe a quatidade de itens:");
	scanf("%f", &item);
	
    for(i = 0; i < item; i++){
	
	printf("Informe o nomes do produto:\n");
	scanf("%s", &nomes[i]);
	
	printf("Informe o custo dos produto:\n");
	scanf("%f", &custo);

	printf("Informe a porcentagem de cada produto:\n");
	scanf("%f", &porcentagem);
	
	valor =	(custo + custo * porcentagem) /100;
	
	printf("O valor em porcentagem e:");
	scanf("%d", &valor);

}
	return 0;
}
