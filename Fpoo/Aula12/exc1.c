#include <stdio.h>

int soma(int a, int b, int c){
	return a + b + c;
}
int media(int a, int b, int c){
	return (a + b + c) / 3;
}
int main(){
	printf(" A media de 84,10 e 16 = %d", media(84, 10,16));
	return 0;
}
