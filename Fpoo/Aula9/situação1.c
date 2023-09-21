#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	printf("Doação de sangue: \n");
	char nome[10];
	int idade;
	char sexoM, sexoF;
	int ultimo;
	int dias;
	int i = 0;

	printf("Informe quantos doadores deseja registrar:");
	scanf("%d", &dias);
	
	for(i = 0; i<dias; i++){
	
	printf("Informe como você de identifica 1.F, 2.M:");
	scanf("%s", &sexoM, &sexoF);
	
	printf("Informe o nome do doador(a):");
	scanf("%s" , &nome);
	
	printf("Informe a idade do doador(a):");
	scanf("%d" , &idade);
	
	printf("Informe número de dias desde a última doação de sangue:");
	scanf("%d", &ultimo);
	
	if(sexoF <= 89){
	printf("O doador(a) vai ser inapto \n");
	   
}else if(sexoF >= 90){
    printf("O doador(a) vai ser apto \n");
    
}else if(sexoM <= 59){
	printf(" O doador(a) vai ser inapto \n");
	
}else if (sexoM >= 60){
	printf(" O doador(a) vai ser apto \n");
	
}

}
	return 0;
}
