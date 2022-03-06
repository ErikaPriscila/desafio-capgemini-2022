#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *v, x, i, j, cont, aux;
    cont = 0;

    scanf("%d", &n); /* lê o tamanho do vetor */

    v = (int *) malloc(n * sizeof(int)); /* aloca o espaço na memória para o vetor com o tamanho informado pelo usuário */

    /*faz a leitura do vetor */
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &x); /* lê o valor de x */


    /* verifica a existência de pares que têm diferença igual a x */
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j) { /* verifica se os índices são diferentes para não subtrair a mesma posição do vetor */
                aux = v[i] - v[j]; /* caso sejam posições diferentes, faz a subtração e guarda numa variável auxiliar */
                if (aux == x) { /* verifica se a variável auxiliar é igual a diferença informada pelo usuário */
                    cont++; /* o contador armazena a quantidade de pares iguais a diferença */
                }
            }
        }
    }

    printf("%d", cont);

    free(v);

    return 0;
}
