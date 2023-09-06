#include <stdio.h>
int main(){
	
	float raio, altura, area, volume, pi = 3.14;
	
	printf("Informe o raio em cm:");
	scanf("%f", &raio);
	
	printf("Informe a altura em cm:");
	scanf("%f", &altura);
	
	area = pi * raio * raio;
 
 	volume = pi * raio * raio * altura;
     
	printf("Area = %.2f cm2 \n", area);
	
	printf("Volume = 5.2f cm3 \n", volume);
	
	return 0;
}
