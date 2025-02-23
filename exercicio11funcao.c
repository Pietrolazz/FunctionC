#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int Primo(int num) {
	int i;
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    for (i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int enesimoPrimo(int n) {
    int count = 0;
    int num = 2;

    while (count < n) {
        if (Primo(num)) {
            count++;
        }
        num++;
    }

    return num - 1;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O valor de n deve ser um número inteiro positivo.\n");
    } else {
        printf("O %d-ésimo número primo é: %d\n", n, enesimoPrimo(n));
    }

    return 0;
}
