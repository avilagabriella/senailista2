#include <stdio.h>
#include <locale.h>
int main(){

	char cid1, cid2;
	float distancia, hora;
	int  vm;
	
	printf("Informe o nome de duas cidades:");
	scanf("%s %s", &cid1, &cid2);
	
	printf("Informe a distancia entre as duas cidades em km:");
	scanf("%f", &distancia);
	
	printf("Informe quantas horas demorou para chegar ate a outra cidade:");
	scanf("%f", &hora);
	
	vm = (distancia / hora);
	
	printf("A velocidade media = %.2f", vm);
	
	
	return 0;	
}
