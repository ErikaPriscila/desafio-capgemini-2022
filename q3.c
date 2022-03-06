#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char str1[500], str2[500], grid[500][500];
    int i, j, tam, raiz, linha, coluna, x, y;

    i = 0;
    j = 0;

    gets(str1);

    /* copia o conteúdo da string str1 para a string str2 sem os espaços em branco */
    while (str1[i] != '\0') { // percorre str1 até o final
        if (str1[i] != ' ') { // verifica se o caractere de str1 é diferente de espaço em branco
            str2[j] = str1[i]; // em caso positivo, str2 recebe o caractere da str1
            j++; // o índice de str2 é incrementado
        }
        i++;
    }
    str2[j] = '\0'; // str2 recebe o finalizador de string


    tam = strlen(str2); // tam recebe o tamanho de str2
    raiz = round(sqrt(tam)); // raiz recebe a raiz arredondada de tam

    /* verifica se a raiz é maior ou igual ao tamanho de str2. Se sim, linha e coluna de grid serão iguais a raiz. Se não,
       linha e coluna receberão o valor de raiz + 1 */
    if ((raiz * raiz) >= tam) {
        linha = raiz;
        coluna = raiz;
    }
    else {
        linha = raiz + 1;
        coluna = raiz + 1;
    }

    /* inicializa a matriz grid com espaços vazios */
    for (x = 0; x < 500; x++) {
        for (y = 0; y < 500; y++) {
            grid[x][y] = ' ';
        }
    }

    // preenche grid com os caracteres de str2
    i = 0;

    for (x = 0; x < linha; x++) {
        for (y = 0; y < coluna; y++) {
            if (str2[i] != '\0') {
                grid[x][y] = str2[i];
                i++;
            }
        }
    }

    /* imprime grid */
    for (y = 0; y < coluna; y++) {
        for (x = 0; x < linha; x++) {
            printf("%c", grid[x][y]);
        }
        printf(" ");
    }

    return 0;
}


