#include <stdio.h>
int main(){
	int tempo;
	int min = 0;
	int horas = 0;
	int seg = 0;
	
	printf("Informe quatos segundos quer transformar em horas:");
	scanf("%d", &seg);
	
	horas = seg/3600;
	min = (seg%3600)/60;
	seg = seg%60;

		printf("Sao %d horas %d minutos e %d segyndos,horas,min,seg	");
	
		
		
	return 0;
}
