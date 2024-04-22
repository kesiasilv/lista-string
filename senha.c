#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char senha[10];
	int veri = 0;//variavel de verificação
	
	printf("Digite a senha: ");
	fgets(senha,10,stdin);//usamos fgets para não ter possiveis estouro no buff 
	
	senha[strcspn(senha, "\n")] = '\0';//remove o caractere de linha quebrada para não interferir na comparaçãõ
	 
	if(strcmp(senha,"1234") == 0){//fazendo a comparação
		veri = 1;//se for verdade a variavel passa a valer 1
		}
	if(veri == 1){//caso seja verdade == 1 (ou pode ser escrita apenas o (veri) na condição do if pois ele já esta vaelendo 1)
		printf("ACESSO APROVADO!");//imprimi a mensagem se for verdade de aprovado
	}
	else{
		printf("ACESSO NEGADO!");//caso contrário imprima "negado"
	}
	return 0;
	
}

