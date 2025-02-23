#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void inserir(int vetor[3]);
int ordem(int veri[3]);

void main (void){
	setlocale(LC_ALL, "portuguese");
	
	int vetor[3];
	
	inserir(vetor);	

	ordem(vetor);
}

void inserir(int vet[3]){
	int i;
	
	printf("Insira os valores que deseja: ");
		for(i = 0; i < 3; i++){
			scanf("%d", & vet[i]);
	}
}
int ordem(int veri[3]) {
    int i, maior = veri[0];
    
    for(i = 1; i < 3; i++) {
        if(veri[i] > maior) {
            maior = veri[i]; 
        }
    }
    printf("O maior número é: %d", maior);
    return maior; 
}
