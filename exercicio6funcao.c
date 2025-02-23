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
bool Aprovado = 1, Reprovado = 0;

    printf("Digite 2 números: ");
    scanf("%d%d", &x,&y);
    
    if (x+y >= 19 && x > 7 && y > 7) {
                printf("Aluno Aprovado");
    return 1;
    }else{
		printf("Aluno Reprovado");
            }
    return 0;
	}
