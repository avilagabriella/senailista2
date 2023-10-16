#include <stdio.h>

FILE *entrada;
char arqEntrada[] = "entrada.csv";
struct pessoa{
	 int id;
	 char nome[50];
	char nascimento[11];
};


int main(){
	char linha[100];
	entrada = fopen(arqEntrada,"r");
	while(fgets(linha,100, entrada) != NULL){
		
		printf("%s", linha);
	}
	fclose(entrada);
	return 0;
}
