#include <stdio.h>

int main(){
 char casa[]="arquivo.txt",
      nome[20];
      char c;
      int reprovado = 0;
      int aprovado = 0;
      int nota;
 float nota1, nota2, nota3;
 FILE *arquivo;
 
 arquivo = fopen(casa, "r");
 if(arquivo == NULL)
   printf("Erro, nao foi possivel abrir o arquivo\n");
 else
  while( (fscanf(arquivo,"%s %f %f %f\n", nome, &nota1, &nota2, &nota3))!=EOF )
   printf("%s teve media %.2f\n", nome, (nota1+nota2+nota3)/3);
   
   if(nota >= 5){
   
   
   	   printf("aprovado!");
   	    aprovado = aprovado++;
   
}else 
    printf("Reprovado");
	 reprovado = reprovado++;
	 



 
 fclose(arquivo);
 
 
 
 return 0;
}



