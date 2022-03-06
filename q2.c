#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *v, x, i, j, cont, aux;
    cont = 0;

    scanf("%d", &n); /* l� o tamanho do vetor */

    v = (int *) malloc(n * sizeof(int)); /* aloca o espa�o na mem�ria para o vetor com o tamanho informado pelo usu�rio */

    /*faz a leitura do vetor */
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &x); /* l� o valor de x */


    /* verifica a exist�ncia de pares que t�m diferen�a igual a x */
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j) { /* verifica se os �ndices s�o diferentes para n�o subtrair a mesma posi��o do vetor */
                aux = v[i] - v[j]; /* caso sejam posi��es diferentes, faz a subtra��o e guarda numa vari�vel auxiliar */
                if (aux == x) { /* verifica se a vari�vel auxiliar � igual a diferen�a informada pelo usu�rio */
                    cont++; /* o contador armazena a quantidade de pares iguais a diferen�a */
                }
            }
        }
    }

    printf("%d", cont);

    free(v);

    return 0;
}
