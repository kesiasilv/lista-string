#include <stdio.h>
#include <string.h>
#include <locale.h>
//biblioteca string (string.h) e de acentos (locale.h)
#define N 20

int main(){
	setlocale(LC_ALL, "portuguese");

	char origem[N] = {"olá, mundo!"};
	char destino[N];
		
	printf("antes do strcpy: \n");
	puts(origem);
	puts(destino);
	
	printf("depois do strcpy: \n");
	strcpy(destino, origem);
	puts(origem);
	puts(destino);
}
