#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL, "portuguese");

	char s[N];
	int i;

	printf("digite um texto: \n");
	gets(s);
	/*como o gets n tem limite usei para mostrar
	nesse exemplo qual o tamando da string digiada
	pelo usuario caso ele ultrapassasse o tamanho estabelecido*/
	i = strlen(s);
	
	printf("tamanho do texto = %d\n\n", i);
	printf("impressao de posicao a posicao: \n");
	
	/*usei o for so pra ser mais especifica, 
	mas o puts faz a mesma coisa, confira a baxo:*/
	for(i=0; i<strlen(s); i++){
		printf("%c\n", s[i]);
	}
	
	/*fazendo a mesma coisa q o for porem na mesma 
	linha, (se tirar o '\n' do for imprimira a mesma coisa)*/
	puts(s);
}
