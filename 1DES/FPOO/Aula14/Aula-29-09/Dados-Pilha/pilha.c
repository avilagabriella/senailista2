#include <stdio.h>
#define size 10
	int pilha[size] = {0, 0, 0, 0, 0, 0};
	int ponteiro = 0;
	int i;
	
void mostraPilha(){
		printf("Pilha: \n");
		
	for(i = 0; i < ponteiro; i++)
	
		printf("%d \n", pilha[i]);
}
int push(int dado){
		if(ponteiro < size){
		
	pilha[ponteiro] = dado;
	ponteiro++;
	return 1;
}
		 else return 0;
}
int pop(){
	if(ponteiro >= 0){
		ponteiro--;
		return 1;
	}else
	return 0;
}
		

int main(){
	push(25);
		mostraPilha();
	push(32);
		mostraPilha();
	push(15);
		mostraPilha();
	pop();			
	mostraPilha();
		pop();			
	mostraPilha();
	return 0;
}
