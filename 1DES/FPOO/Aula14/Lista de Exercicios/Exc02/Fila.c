#include <stdio.h>
#define SIZE 10
int fila[SIZE];
int ponteiro = 0;
int i;
void mostraFila(){
	printf("Fila:\n");
	for(i = 0; i < ponteiro; i++)
		printf("%d ", fila[i]);
	printf("\n");
}
int push(int dado){
	if(ponteiro < SIZE){
		fila[ponteiro] = dado;
		ponteiro++;
		return 1;
	} 
	else return 0;
}
int pop(){
	if(ponteiro > 0){
		ponteiro--;
		for(i = 0; i < ponteiro; i++){
			fila[i] = fila[i+1];
		}
		return 1;
	}else
		return 0;
}
int main(){
		
	int op = 0;
	int x;
	do{
			printf("\n1. Adicionar; \n2. Remover; \n0. Sair\nEscolha ma opcao:");
			scanf("%d", &op);
			if(op == 1){
				printf("Informe um numero inteiro:");
				scanf("%d", &x);
				push(x);
				mostraFila();
			}else if(op == 2){
				pop();
				mostraFila();
			}
	}while(op != 0);
	printf("Obrigado por utilizar nosso programa");
}
