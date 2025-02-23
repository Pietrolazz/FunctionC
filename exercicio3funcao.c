#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void inserir(int vetor[2]);
int somar(int vtsoma[2]);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int vetor[2], i;
	
	inserir(vetor);	

	somar(vetor);
}

void inserir(int vet[2]){
	int i;
	
	printf("Insira os valores que deseja valor: ");
		for(i = 0; i < 2; i++){
			scanf("%d", & vet[i]);
	}
}
int somar(int vtsoma[2]){
	
	vtsoma[2] = sqrt((vtsoma[0] * vtsoma[0]) + (vtsoma[1] * vtsoma[1]));
	
	if(vtsoma[2] < 0){
		int r;
		r = 0;
		printf("%d", r);
		return r;
	}else{
		printf("A sua raíz é: %d", vtsoma[2]);
			return vtsoma[2];
	}
}
