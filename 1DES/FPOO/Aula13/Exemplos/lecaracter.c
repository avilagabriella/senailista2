#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	FILE *arquivo;
	char c;
	char linha[100];
	
	arquivo = fopen("arquivo.txt", "r");
	if(arquivo == NULL)
		printf("Erro, não foi possivel abrir o arquivo\n");
		else{
			
			while((fgets(linha, sizeof(linha),arquivo)) != NULL)
						printf("%s", linha);
		}
		fclose(arquivo);
	return 0;
}
