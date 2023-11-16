#include <stdio.h>
#include <string.h>

/*8. **Contagem de ocorrências de uma letra em uma string**:
Escreva um programa que leia uma string e uma letra do
usuário e conte quantas vezes a letra aparece na string. Exiba
o resultado.*/

int main(){
	
	char str[200];
	char letra;
	int count = 0;
	int i;
	
	printf("Digite uma string: ");
	fgets(str, sizeof(str), stdin);
	
	printf("Digite uma letra para contar: ");
	scanf(" %c", &letra);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == letra) {
		count++;
		}
	}
	
	printf("A letra '%c' aparece %d vezes na string.\n", letra, count);

}
