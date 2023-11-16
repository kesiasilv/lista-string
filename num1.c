#include <stdio.h>

/*1. **Soma de elementos em um array**: dado o int array[5] =
{1,2,3,4,5}, Escreva um programa que calcule a soma de todos
os elementos em um array de inteiros.*/

int main(){
    int num[5]= {1, 2, 3, 4, 5}, soma = 0;

    
        soma = num[0] + num[1] + num[2] + num[3] + num[4];
    

    printf("a soma dos arraya = %i", soma);
}

/*resposta do professor:
#include <stdio.h>
#include <string.h>

int main(){
	
//indice 0 1 2 3 4

	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int soma = 0;
	int i;
	
	for(i = 0; i < n; i++)
	{
		soma += arr[i];
	}
	
printf("Soma %d ", soma);
}
*/

