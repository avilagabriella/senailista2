#include <stdio.h>
int main(){
	float n1, n2, n3, media;

	printf("Informe o primeiro numero:");
	scanf("%f", &n1);
	
	printf("Informe o segundo numero:");
	scanf("%f", &n2);
	
	printf("Informe o terceiro numero:");
	scanf("%f", &n3);
	
	media = ( n1 + n2 + n3) / 3;
	
	printf("A media da pessoa =  %.2f\n", media);
	
	return 0;
}
