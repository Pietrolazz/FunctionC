#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Algarismos(int x);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int x;	

	Algarismos(x);
}

int Algarismos(int x){
    int digito, soma;

    printf("Digite um número: ");
    scanf("%d", &x);
    
    while(x > 0){
    digito = x % 10;
    soma = soma + digito;
    x = x / 10;
	}       
        printf("A soma dos algarismos é: %d", soma);
	return soma;
	}
