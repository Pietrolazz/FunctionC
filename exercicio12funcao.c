#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool Inserir(int x, int y, int z);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int x, y, z;	

    printf("Digite o Ano: ");
    scanf("%d", &x);    
        printf("Digite o Mês : ");
    scanf("%d", &y);    
        printf("Digite o Dia: ");
    scanf("%d", &z);
    
	if (Inserir(x, y, z)){
        printf("A data é válida.\n");
    } else {
        printf("A data é inválida.\n");
    }	
	
}

bool Inserir(int x, int y, int z){
bool Correto = 1, Incorreto = 0;
    
    if (x < 1900 || x > 2024){
    return 0;
	}
	if (y < 1 || y > 12){
    return 0;
	}
    if((y == 4 || y == 6 || y == 9 || y == 11) && z > 30){
    return 0;
	}
    if(y == 2 && z > 29){
    return 0;
	}
	if((y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12) && z > 31){
	return 0;
		}
	}
