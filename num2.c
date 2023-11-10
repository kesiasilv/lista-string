#include <stdio.h>

/*2. **Média de elementos em um array**:dado o float array[] =
{1.5, 2.5, 3.5, 4.5, 5.5} Escreva um programa que calcule a
média dos elementos em um array de ponto flutuante.*/

int main(){
    
    float num[5]= {1.5, 2.5, 3.5, 4.5, 5.5}, soma = 0;

    
        soma = num[0] + num[1] + num[2] + num[3] + num[4];
    

    printf("a soma dos arraya = %.2f", soma / 5);
}
