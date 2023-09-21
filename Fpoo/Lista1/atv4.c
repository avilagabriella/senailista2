#include <stdio.h>
int main(){
	char time[10];
	int vitorias;
	int empates;
	
	printf("Informe um nome para o time:");
	scanf("%s" ,&time);
	
	
	printf("Informe as vitorias do timr:");
	scanf("%d" ,&vitorias);
	
	printf("Informe os empates do time:");
	scanf("%d" ,&empates);
	
	vitorias = vitorias*3;
	empates = empates++;
	vitorias = vitorias + empates;
	
	printf("O time %s te um total de %d pontos", time, vitorias);
	return 0;
}
