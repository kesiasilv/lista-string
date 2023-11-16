#include <stdio.h>
#include <string.h>

/*2. **Média de elementos em um array**:dado o float array[] =
{1.5, 2.5, 3.5, 4.5, 5.5} Escreva um programa que calcule a
média dos elementos em um array de ponto flutuante.*/

int main(){
    
    float num[5]= {1.5, 2.5, 3.5, 4.5, 5.5}, soma = 0;

    
        soma = num[0] + num[1] + num[2] + num[3] + num[4];
    

    printf("a soma dos arraya = %.2f", soma / 5);
}

/*//resposta do professor:

#include <stdio.h>
#include <string.h>

int main(){
	
	float array[] = {1.5, 2.5, 3.5, 4.5, 5.5};
	int n = sizeof(array) / sizeof(array[0]);
	int i;
	float soma = 0;
	float media = 0;
	
	
	for (i = 0; i < n; i++){
	soma += array[i];
	}
	
	media = soma / n;
	printf("A media dos elementos e: %.2f\n", media);
	
}*/
