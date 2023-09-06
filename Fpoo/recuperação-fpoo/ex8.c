#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
   char nome[5], nomevelho;
   int idade, i, idadevelho;

   for(i = 1; i <= 5; i++){
   printf("Digite seu nome: ");
   scanf("%s", &nome);
   
   printf("Digite sua idade: ");
   scanf("%d", &idade);

   if(idade > idadevelho){
      idadevelho = idade;
      nomevelho = nome;
  	 }
   }

   printf("\nO nome da pessoa mais velha é: %s", nome);
   printf("\nSua idade é: %d\n", idadevelho);
   return 0;

}


