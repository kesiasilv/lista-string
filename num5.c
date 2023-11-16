#include <stdio.h>
#include <string.h>

/*5. **Comparação de strings**:
Escreva um programa que leia duas strings do usuário e
compare-as para determinar se são iguais ou diferentes. Exiba
o resultado da comparação.*/

int main(){

    char str1[100], str2[100];
	
	printf("Digite a primeira string: ");
	fgets(str1, sizeof(str1), stdin);
	
	printf("Digite a segunda string: ");
	fgets(str2, sizeof(str2), stdin);
	
	if (strcmp(str1, str2) == 0) {
		printf("As strings são iguais.\n");
	} else {
		printf("As strings são diferentes.\n");
	}


}


