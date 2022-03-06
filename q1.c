#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *v, i, j, menor, aux, mediana, posicao;

    scanf("%d", &n); /* l� o tamanho �mpar do vetor */

    v = (int *) malloc(n * sizeof(int)); /* aloca o espa�o na mem�ria para o vetor com o tamanho �mpar informado pelo usu�rio */

    /* faz a leitura do vetor */
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    /* ordena o vetor */
    for (i = 0; i < (n - 1); i++) {
        menor = i;

        // percorre o vetor a partir do �ndice sucessor de i e verifica o �ndice do menor elemento do vetor
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

    // c�lculo da mediana
    posicao = (int) (n - 1) / 2; // calcula a posi��o do vetor onde est� a mediana
    mediana = v[posicao]; // mediana recebe o elemento que est� na posi��o calculada

    printf("%d", mediana);

    free(v);

    return 0;
}
