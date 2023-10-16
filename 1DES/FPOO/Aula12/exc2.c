#include <stdio.h>
 float mediaN(float * notas, int n){
 	float total = 0;
 	int i;
 	for(i = 0; i < n; i++)
 		total += notas[i];
 	return total / n;
 }
 int main(){
 	float notas[] = {10, 8 ,5};
 	int bytes = sizeof(notas);
 	int elementos = bytes / sizeof(notas[0]);
 	print("Tamanho do vetor em bytes = %d\n", bytes);
 	printf("Quantidade de elementos do vetor = %\n", elementos);
 	printf("%.1f", mediaN(notas, 7));
 	return 0;
 }
