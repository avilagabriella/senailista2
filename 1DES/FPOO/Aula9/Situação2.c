#include <stdio.h>
int main(){
	char cidade, nomes[100];
	int votos, brancos, nulos, candidatos, i, votosValidos,can;
	
	printf("Informe o nome da cidade:");
	scanf("%s", &nomes[i]);
	
	printf("Informe quantos se candidataram a prefeito:");
	scanf("%d", &can);
	
	for (i = 0; i < can; i++) {
		
		prntf("\nInforme o nome do candidato %d: ", i + 1);
		scanf("%s", &nomes[can]);
		
		printf("Informe o total de votos para o candidato %s: ");
        scanf("%d", &votos[can]);
	}
	
		printf("\nInforme o total de votos em branco:");
		scanf("%d", &brancos[can]);
		
		printf("\nInforme o total de votos em nulo:");
		scanf("%d", &nulos[can]);
		
		votosValidos = 0;
		 for (i = 0; i < can; i++) {
        votosValidos += votos;
    }
      votosValidos += brancos;

	return 0;
}
