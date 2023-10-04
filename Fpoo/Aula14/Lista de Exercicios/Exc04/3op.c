#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
//pilha
int pilha[SIZE];
int pontPilha = 0;
int i;
void mostraPilha(){
	printf("Pilha:\n");
	for(i = 0; i < pontPilha; i++)
		printf("%d\n", pilha[i]);
}
int pushPilha(int dado){
	if(pontPilha < SIZE){
		pilha[pontPilha] = dado;
		pontPilha++;
		return 1;
	} 
	else return 0;
}
int popPilha(){
	if(pontPilha >= 0){
		pontPilha--;
		return 1;
	}else
		return 0;
}
//fila
int fila[SIZE];
int pontFila = 0;
void mostraFila(){
	printf("Fila:\n");
	for(i = 0; i < pontFila; i++)
		printf("%d ", fila[i]);
	printf("\n");
}
int pushFila(int dado){
	if(pontFila < SIZE){
		fila[pontFila] = dado;
		pontFila++;
		return 1;
	} 
	else return 0;
}
int popFila(){
	if(pontFila >= 0){
		pontFila--;
		for(i = 0; i < pontFila; i++){
			fila[i] = fila[i+1];
		}
		return 1;
	}else
		return 0;
}



//lista	

struct Lista{
    int dado;
    struct Lista *prox;
};
struct Lista *inicio = NULL;
struct Lista *fim = NULL;
struct Lista *aux = NULL;
void mostraLista(){
    aux = inicio;
    printf("Lista:\n");
    while(aux != NULL){
        printf("%d\n", aux->dado);
        aux = aux->prox;
    }
}
int pushLista(int dado){
    aux = (struct Lista*) malloc(sizeof(struct Lista));
    if(aux == NULL) return 0;
    aux->dado = dado;
    aux->prox = NULL;
    if(inicio == NULL){
        inicio = aux;
        fim = aux;
    }else{
        fim->prox = aux;
        fim = aux;
    }
    return 1;
}


int slice(int index){
    int i;
    aux = inicio;
    if(index == 0){
        inicio = inicio->prox;
        free(aux);
        return 1;
    }else{
        for(i = 0; i < index-1; i++){
            aux = aux->prox;
        }
        struct Lista *aux2 = aux->prox;
        aux->prox = aux2->prox;
        free(aux2);
        return 1;
    }
    return 0;
}

int main(){
    int op = 0;
	int x;
	do{
			printf("\n1. Add Pilha\n2. DelPIlha\n3.Add Fila\n4. Del Fila\n5. Add Lista\n6. Del");
			printf("Escolha uma opcao:");
			sanf("%d", &op);
			switch(op)
			case 1;
				printf("Informe um numero inteiro:");
				scanf("%d", &x);
				push(x);
				mostraLista();
			else if(op == 2){
				printf("Infor,e o indice do valor a ser excluido:");
				scanf("%d", &x);
				slice(x);
				pop();
				mostraLista();
			}
	}while(op != 0);
	printf("Obrigado por utilizar nosso programa");
}
	
