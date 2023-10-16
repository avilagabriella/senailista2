#include <stdio.h>
int main(){
	float nota1, nota2;
	int media, disciplina
	 char nome;
	
	printf("Informe a disciplina:");
	scanf("%d", &disciplina);
	
	printf("Informe o nome do aluno:");
	scanf("%s", &nome);
	
	printf("Informe as duas notas da disciplina:");
	scanf("%f %f", &nota1, &nota2);
	
	media = (nota1 + nota2)/2;
	 
	printf("A media e: %d", media);
	
	if(media >= 6){
		printf("Voce foi aprovado!");
	}else if(media <= 5){
		printf("Voce foi reprovado!");
	}
	return 0;
}
