#include <stdio.h>
#include <string.h>

/*6. **Cópia de strings**:
Escreva um programa que leia uma string do usuário e copie-
a para outra string. Em seguida, exiba a string copiada.*/

int main(){

	char str1[100], str2[100];
	
	printf("Digite uma string: ");
	fgets(str1, sizeof(str1), stdin);
	
	// Copiar str1 para str2
	strcpy(str2, str1);
	printf("String copiada para str2: %s", str2);


}


