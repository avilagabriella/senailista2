#include <stdio.h>
int frases(char frase[], int n){
	int i;
	for(i = 0; i < n; i++)
	printf("%s\n", frase);
}
	int main(){
	frases("Palmeiras nao tem mundial", 1000);
	return 0;
}
