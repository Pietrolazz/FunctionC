#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool Inserir(int x, int y, int z);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int x, y, z;	

	Inserir(x, y, z);
}

bool Inserir(int x, int y, int z){
bool Correto = 1, Incorreto = 0;

    printf("Digite 3 n�meros: ");
    scanf("%d%d%d", &x,&y,&z);
    
    if (x > y && y > z && z < x) {
     printf("O valor � correto");	
    return 1;
    }else{
    printf("O valor � incorreto");	
            }
    return 0;
	}
