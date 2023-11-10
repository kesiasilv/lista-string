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
