#include <stdio.h>

// Função de pesquisa binária
int pesquisa_binaria(int lista[], int tamanho, int item) {
    int baixo = 0;
    int alto = tamanho - 1;

    while (baixo <= alto) {
        int meio = (baixo + alto) / 2;
        int chute = lista[meio];

        if (chute == item) {
            return meio;
        }
        if (chute > item) {
            alto = meio - 1;
        } else {
            baixo = meio + 1;
        }
    }

    return -1; // Retorna -1 para indicar que o item não foi encontrado
}

int main() {
    int minha_lista[] = {1, 3, 5, 7, 9};
    int tamanho = sizeof(minha_lista) / sizeof(minha_lista[0]);

    // A função sizeof(minha_lista) retorna o tamanho total do array em bytes.
    // A função sizeof(minha_lista[0]) retorna o tamanho de um elemento do array em bytes.
    // A divisão de um pelo outro nos dá o número de elementos no array, pois o primeiro retorna algo do tipo 36 
    // bytes e o segundo 4 bytes, logo 36/4 = 9 elementos.

    printf("%d\n", pesquisa_binaria(minha_lista, tamanho, 3));  // Saída: 1
    printf("%d\n", pesquisa_binaria(minha_lista, tamanho, -1)); // Saída: -1
    
    return 0;
}