#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int Inserir(int x, int y);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int x, y;	

	Inserir(x, y);
}

int Inserir(int x, int y){
bool possivel = 1, impossivel = 0;

    printf("Digite 2 números para realizar uma divisão: ");
    scanf("%d%d", &x,&y);
    
    
    if (x == 0 || y == 0){
    	printf("A divisão não é possível");
    	return 0;
    }
    if (x % y == 0) {
                printf("A divisão é possível");
    return 1;
    }else{
		printf("A divisão não é possível");
            }
    return 0;
	}
