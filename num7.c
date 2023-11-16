#include <stdio.h>
#include <string.h>

/*7. **Inversão de uma string**:
Escreva um programa que leia uma string do usuário e
inverta os caracteres na string. Em seguida, exiba a string
invertida.*/

int main(){
	
	char str[100];
	int i;

	printf("Digite uma string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	int len = strlen(str);
	
	for (i = len; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");

}
