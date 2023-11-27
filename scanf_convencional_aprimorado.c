#include <stdio.h>

int main(){
	
	char conteudo[10];
	
	printf("digite algo (scanf convecional): \n");
	scanf("%s", conteudo);
	fflush(stdin);
	
	printf("resultado: %s\n\n", conteudo);
	
	printf("digite algo (scanf aprimorado): \n");
	scanf("%9[^\n]s", conteudo);
	fflush(stdin);
	
	printf("resultado: %s\n", conteudo);
}
