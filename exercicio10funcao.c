#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int Inserir(int x);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int x;	

	Inserir(x);
}

int Inserir(int x){
bool Correto = 1, Incorreto = 0;

    printf("Digite 1 n�mero: ");
    scanf("%d", &x);
    
    if (x % 2 != 0){
     printf("O valor � primo");	
    return 1;
    }else{
    printf("O valor n�o � primo");	
            }
    return 0;
	}
