#include <stdio.h>
int funcao(int vetor[], int n){
	int i;
	for(i = 0; i < n; i++)
	printf("%d\n", vetor[i]);
}
int main(){
	int numeros[] = [10, 8, 7, 3];
	funcao(numeros, 4);
	return 0;
}
