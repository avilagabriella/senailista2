#include <stdio.h>

int main() {
	
    FILE *entrada = fopen("suco.in", "r");
    FILE *saida = fopen("suco.out", "w");

    if (entrada == NULL || saida == NULL) {
    	
        printf("Erro ao abrir arquivo\n");
    
    }

    while (1) {
    	
        int Ami, Frut;
        
        fscanf(entrada, "%d %d", &Ami, &Frut);

        if (Ami == 0 && Frut == 0) {
        	
            break;
            
        }

        float suc = (float)Frut / (Ami * 20.0); 
        
        fprintf(saida, "\n Quantidade de suco: %.2f \n", suc);
    }

    fclose(entrada);
    fclose(saida);

    return 0;
}





