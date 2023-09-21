#include <stdio.h>
int zeraElemento(int *ponteiro, int indice){
	ponteiro[indice] = 0;


int mostraVetor(int *ponteiro, int n){
	int i;
	for(i = 0; i < n; i++)
	printf("%d\n", ponteiro[i]);
}
int main(){
	int numeros[] = {10, 8, 7, 3};
	zraElemento(numeros, 0);
	mostraVetor(numeros, 4);
	return 0;
}
