#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ContaPrimos(int x, int y);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int x, y;	

	ContaPrimos(x, y);
}

int ContaPrimos(int x, int y){
    int i, j;

    printf("Digite 2 números: ");
    scanf("%d%d", &x,&y);
    
    if (x < y) {
        for (i = x; i <= y; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    } else {
        for (i = x; i >= y; i--) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    }
    	if(x == y){
	printf("Não é possível fazer a operação");	
	}
	return i;
	}
