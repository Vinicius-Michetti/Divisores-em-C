#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores. Exemplo: Os
divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66. */

int main()
{
    int n, i;

    printf("Digite um numero n inteiro: ");
    scanf("%d", &n);
    printf("\nOs divisores de %d sao: ", n);

    for(i = 1; i <= n; i++){
        if (n % i == 0){
            printf("\n%d", i);
        }
    }
}
