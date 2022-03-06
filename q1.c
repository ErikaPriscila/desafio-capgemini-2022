#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *v, i, j, menor, aux, mediana, posicao;

    scanf("%d", &n); /* lê o tamanho ímpar do vetor */

    v = (int *) malloc(n * sizeof(int)); /* aloca o espaço na memória para o vetor com o tamanho ímpar informado pelo usuário */

    /* faz a leitura do vetor */
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    /* ordena o vetor */
    for (i = 0; i < (n - 1); i++) {
        menor = i;

        // percorre o vetor a partir do índice sucessor de i e verifica o índice do menor elemento do vetor
        for (j = (i + 1); j < n; j++) {
            if (v[j] < v[menor]){
                menor = j;
            }
        }

        // faz a troca dos elementos
        if (v[i] != v[menor]) {
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }

    }

    // cálculo da mediana
    posicao = (int) (n - 1) / 2; // calcula a posição do vetor onde está a mediana
    mediana = v[posicao]; // mediana recebe o elemento que está na posição calculada

    printf("%d", mediana);

    free(v);

    return 0;
}
