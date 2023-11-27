#include <stdio.h>

int main(){
	
	char conteudo[10];
	
	//gets ultrapssa o limite -- não é recomendavel ultiliza-lo;
	printf("digite algo (gets): \n");
	gets(conteudo);
  //limpa o  lixo de memoria (stdin é => teclado)
	fflush(stdin);
	
	//puts nao lê outras variaveis como float, int..
	puts("resultado:");
	puts(conteudo);
	puts("");
	
	/*sintaxe simples ele separa um lugar na memoria para o coteudo neutro '\0'
	automaticamente e nao ultrapassa o limite de conteudo da string: */
	printf("digite algo (fgets): \n");
	fgets(conteudo, 10, stdin);
	fflush(stdin);
	
	puts("resultado:");
	puts(conteudo);
	
}
