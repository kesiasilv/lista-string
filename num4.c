#include <stdio.h>
#include <string.h>

/*4. **Concatenação de strings**:
Escreva um programa que leia duas strings do usuário e
concatene-as em uma terceira string. Em seguida, exiba a
string resultante.*/

int main(){
    char s[20], s2[20];

    printf("digite um texto: \n");
    fgets(s, 20, stdin);
    fflush(stdin);

    printf("digite outro texto: \n");
    fgets(s2, 20, stdin);
    fflush(stdin);

    strcat(s, s2);

    printf("tudo junto: \n");
    puts(s);
}

/*resposta do professor:

#include <stdio.h>
#include <string.h>

int main(){

	char str1[100], str2[100], resultado[200];
	
	printf("Digite a primeira string: ");
	fgets(str1, sizeof(str1), stdin);
	
	printf("Digite a segunda string: ");
	fgets(str2, sizeof(str2), stdin);
	
	strcpy(resultado, str1);
	strcat(resultado, str2);
	printf("String concatenada: %s", resultado);
}

*/
