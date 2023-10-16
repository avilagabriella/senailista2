#include <stdio.h>
int main(){
	float nota[2];
	float media;
	char nome[20];
	int i; 
	
	printf("Digite o nome do aluno: ");
	scanf("%s",&nome);
	for(i = 0; i < 2; i++){
		do{
			printf("Digite a %dª nota entre 0 e 10: ", i + 1);
			scanf("%f", &nota[i]);
		}while(nota[i] < 0 || nota[i] > 10);
	}
	
	for(i = 0; i < 2; i++){
		media += nota[i]; 

		printf("Nota %d: %.1f\n", i + 1, nota[i]);
	}
	media /= 2;
	printf("%s sua média é %.1f \n", nome, media);
	
	if(i<5) printf("Aprovado");
	else printf("Reprovado");
	
	return 0;
}
