#include <stdio.h>

int main() {
	
    float preco;
	float preco_final;

    printf("Digite o pre?o do produto: ");
    scanf("%f", &preco);

    if (preco > 1000) {
    	
        preco_final = preco * 0.92; 
        
    } else {
    	
        preco_final = preco;
        
    }
    
    printf("Pre?o final: %.2f\n", preco_final);

    return 0;
}

