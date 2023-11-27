#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char test[N] = {"sol"};//exemplo
	char senha[N];
	int ok;
	
	printf("digite a senha: \n");
	gets(senha);
	
	/*o 'strcmp' compara strings, entao nesse 
	caso ele esta comparando a string 'test' 
	com a string 'senha' se os dois textos forem 
	iguais ele sera igual a zero, caso contrario
	retornara numeros diferente de zero*/
	ok = strcmp(test, senha);
	
	//condicoes para explicar a comparacao:
	if(ok == 0){
		
		printf("textos iguais (ou seja senha correta)");
		
	}else{//caso seja diferente de zero executara o comando else
	
		printf("textos diferentes (ou seja senha incorreta)");
	}
}
