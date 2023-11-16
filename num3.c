#include <stdio.h>
#include <string.h>

/*3. **Contagem de caracteres em uma string**:
Escreva um programa que leia uma string do usuário e conte
quantos caracteres a string possui, excluindo o caractere nulo
de terminação '\0'. Em seguida, exiba o resultado.*/

int main(){

    char s[10];
    int i;

    printf("Digite um texto\n");
    fgets(s, 10, stdin);

    s[strcspn(s, "\n")] = '\0';
    i = strlen(s);

    printf("o tamanho do texto digitado: %d\n", i);
    printf("impressao de posicao em posicao: \n");

    for(i = 0; i < strlen(s); i++){
        printf("%d - %c \n", i, s[i]);
    }

}

/*resposta do professor:

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100];
	
	printf("Digite uma string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0'; 
	// para desconsiderar caractere de nova linha

 	int comprimento = strlen(str); // -1 para desconsiderar o caractere de nova linha
	printf("A string possui %d caracteres.\n", comprimento);
}


*/
