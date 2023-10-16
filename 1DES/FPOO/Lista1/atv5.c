#include <stdio.h>
int main(void){
	int numero;
	int numero1;
	int numero2;
	
	print("Informe um numero inteiro:");
	scanf("d" ,&numero);
	
	if(numero >0)
	 numero1 = numero + 1;
	 numero2 = numero - 1;
	 
	}
	else { 
	
		printf("O numero inserido deve ser maior que 0");
	return 0;
}

    printf("O numero escolhido foi %d \n%d + 1 = %d \n%d - 1 = %d" ,numero ,numero, numero1,numero, numero2);
    return 0;
    
}

