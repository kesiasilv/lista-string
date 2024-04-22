#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//contando numero de vogais em uma string
int main(){
	char str[20] = "Estudo Prova";//string chamada (str)
	char vogais[11] = "aeiouAEIOU";//string chamada (vogais)
	int tamanho = strlen(str);//strlen conta o tamanho da string e não o tamanho do vetor;
	int tamanho2 = strlen(vogais);
	int i, j, total = 0;
	
	printf("palavra: %s\n", str);//apresentando palavra;
	
	for(i=0; i<tamanho; i++){//este primeiro for pecorre por todos os carcteres da string palavra(str)
		for(j=0; j<tamanho2;j++){//já este pecorre os caracteres da string vogais(vogais)
			if(str[i] == vogais[j]){//if para comparar cada caractere da string inicial com a string vogal 
				total++;//se encontrou uma vogal soma e guarda na memoria da variavel (total)
				break;//se encontrou finaliza e volta para o primeiro for até pecorrer todas os caracteres
			}
		}
	}
	printf("numero de vogais: %d", total);//apresentando o resultado;
}
