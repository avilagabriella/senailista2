#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    char cidade[100];
    int numCandidatos, i;

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o número de candidatos a prefeito: ");
    scanf("%d", &numCandidatos);

    char nomes[numCandidatos][100];
    int votos[numCandidatos], brancos, nulos;

    for (i = 0; i < numCandidatos; i++) {
        printf("\nDigite o nome do candidato %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite o total de votos para o candidato %s: ", nomes[i]);
        scanf("%d", &votos[i]);
    }

    printf("\nDigite o total de votos em branco: ");
    scanf("%d", &brancos);

    printf("Digite o total de votos nulos: ");
    scanf("%d", &nulos);

    int votosValidos = 0;
    for (i = 0; i < numCandidatos; i++) {
        votosValidos += votos[i];
    }
    votosValidos += brancos;

    // Verificação da validade da eleição
    if (votosValidos > nulos) {
        printf("\nEleição Válida!\n");

        if (votosValidos > 200000) {
            int maiorVotos = votos[0];
            int eleito = 0;
            int segundo = -1;

            for (i = 1; i < numCandidatos; i++) {
                if (votos[i] > maiorVotos) {
                    segundo = eleito;
                    eleito = i;
                    maiorVotos = votos[i];
                } else if (votos[i] > votos[segundo] && votos[i] != maiorVotos) {
                    segundo = i;
                }
            }

            float porcentagemEleito = (float) votos[eleito] / votosValidos * 100;

            if (porcentagemEleito >= 50.0) {
                printf("Candidato Eleito no Primeiro Turno: %s\n", nomes[eleito]);
            } else if (segundo != -1) {
                printf("\nSegundo Turno Necessário!\n");
                printf("Candidatos para Segundo Turno: %s e %s\n", nomes[eleito], nomes[segundo]);

                // Segunda contagem de votos para o segundo turno
                int votosSegundo[numCandidatos];
                int totalVotosSegundo = 0;

                for (i = 0; i < numCandidatos; i++) {
                    if (i == eleito || i == segundo) {
                        printf("Digite o total de votos para o candidato %s no segundo turno: ", nomes[i]);
                        scanf("%d", &votosSegundo[i]);
                        totalVotosSegundo += votosSegundo[i];
                    }
                }

                if (totalVotosSegundo == 0) {
                    printf("Nenhum voto registrado no segundo turno. A eleição é inválida.\n");
                } else {
                    printf("Resultados do Segundo Turno:\n");
                    printf("=============================\n");

                    for (i = 0; i < numCandidatos; i++) {
                        if (i == eleito || i == segundo) {
                            float porcentagem = (float) votosSegundo[i] / totalVotosSegundo * 100;
                            printf("Candidato %s - %.2f%% dos votos\n", nomes[i], porcentagem);
                        }
                    }

                    // Determinar o vencedor do segundo turno
                    if (votosSegundo[eleito] > votosSegundo[segundo]) {
                        printf("\nCandidato %s venceu o segundo turno e é eleito prefeito!\n", nomes[eleito]);
                    } else if (votosSegundo[eleito] < votosSegundo[segundo]) {
                        printf("\nCandidato %s venceu o segundo turno e é eleito prefeito!\n", nomes[segundo]);
                    } else {
                        printf("\nEmpate no segundo turno. Novas eleições devem ser realizadas.\n");
                    }
                }
            }
        } else {
        	int maiorVotos = votos[0];
            int eleito = 0;
            int segundo = -1;

            for (i = 1; i < numCandidatos; i++) {
                if (votos[i] > maiorVotos) {
                    segundo = eleito;
                    eleito = i;
                    maiorVotos = votos[i];
                } else if (votos[i] > votos[segundo] && votos[i] != maiorVotos) {
                    segundo = i;
                }
            }

            float porcentagemEleito = (float) votos[eleito] / votosValidos * 100;
            
            printf("Candidato Eleito no Primeiro Turno: %s\n", nomes[eleito]);
        }
    } else {
        printf("\nEleição Inválida!\n");
    }

    return 0;
}
