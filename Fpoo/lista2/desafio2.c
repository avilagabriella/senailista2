#include <stdio.h>

 int main(){
 	
 	char nome;
 	float peso;
 	float altura;
 	float imc;
 	int continuar= 3;
 	
	while(continuar){
	 
 	printf("Digite seu nome:");
 	scanf("%s", &nome);
 	
 	printf("informe seu peso em kg:");
 	scanf("%f", &peso);
 	
 	printf("informe sua altura:");
 	scanf("%f", &altura);
 	printf("======================================== \n");
 	imc = peso/(altura*altura);
 	
 	printf(" O imc e igual a %.2f \n", imc);
 	
 	if( peso <= 18.5){
 	        printf("vai ser peso magreza %.2f \n", peso);
			}else if( peso > 24.9){
			    printf("vai ser um peso normal %.2f \n", peso);
				}else if(peso  > 29.9){
				printf("vai ser um sobrepeso %.2f \n", peso);
				}else if(peso > 34.9){
	             printf(" vai ser obsidade grau 1 %.2f \n", peso);
				}else if(peso > 39.9){
				printf("vai ser obsidade grau 2 %.2f \n", peso);
				}
				printf("======================================== \n");
				printf("Digite 0 para encerrar\nDigite 1 para continuar\n");
				scanf("%d" ,&continuar);		 
}
 	return 0;
 }

