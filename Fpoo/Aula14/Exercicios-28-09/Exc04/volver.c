#include <stdio.h>

	char calposicao(char comandos[], int n){
		char posicao = 'N';
	
		
		for(i = 0; i < n; i++){
			if(comandos[i] == 'E'){
				if(posicao == 'N'){
					posicao = 'O';
				}else if(posicao == 'O'){
					posicao = 'S';
				}else if(posicao == 'S'){
					posicao = 'L';
				}else{
					posicao = 'N';
				}
			}else{
				if(posicao == 'N'){
					posicao = 'L';
				}else if(posicao == 'L'){
					posicao = 'S';
				}else if(posicao == 'S'){
					posicao = 'O';
				}else{
					posicao = 'N';
			}
		}
    }
		return posicao;
	}
	int main(){
		int n;
		char comandos[1001];
		
		while(1){
			scanf("%d", &n);
			if(n == 0){
				break;
			}
			scanf("%s", comandos);
			char posicaoFinal = calposicao(comandos, n);
			printf("%c\n", posicaoFinal);
		}
	return 0;
}
