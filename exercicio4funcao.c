#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int primo(int num);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int num;	

	primo(num);
}

int primo(int num){
	int i, r, x[2];
	
	printf("Insira seu número: ");
	scanf("%d", &num);

	if(num < 0){
		int r;
		r = 0;
		printf("%d", r);
		return r;
	}
	
	for(i = 0; i < 2; i++){
		
	x[i] = num -= 1;
	
	if(num % 2 != 0){
		
	printf("%d\t", x[i]);
	
	return x[i];
		}
	}
}
