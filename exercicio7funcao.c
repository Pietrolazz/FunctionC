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

    printf("Digite 2 n�meros para realizar uma divis�o: ");
    scanf("%d%d", &x,&y);
    
    
    if (x == 0 || y == 0){
    	printf("A divis�o n�o � poss�vel");
    	return 0;
    }
    if (x % y == 0) {
                printf("A divis�o � poss�vel");
    return 1;
    }else{
		printf("A divis�o n�o � poss�vel");
            }
    return 0;
	}
