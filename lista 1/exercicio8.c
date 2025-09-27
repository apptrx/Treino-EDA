#include <stdio.h>
#include <string.h>

// Definição da struct, sem o 'typedef'.
// O nome real do tipo é 'struct tipoBanda'.
struct tipoBanda {
    char nome[80];
    int ano;
};

// O nome real deste tipo é 'struct tipoShow'.
// Note que dentro dele, usamos 'struct tipoBanda' e não o apelido.
struct tipoShow {
    char nome[80];
    int qtd;
    struct tipoBanda bandas[100];
};

// A assinatura da função agora é EXATAMENTE igual à do enunciado.
void pesquisarBanda(char *nomeBanda, struct tipoShow shows[50], int n) {
    int i, j;
    int encontrou = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < shows[i].qtd; j++) {
            // A lógica de acesso continua a mesma
            if (strcmp(nomeBanda, shows[i].bandas[j].nome) == 0) {
                printf("%s - ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
                encontrou = 1;
                return;
            }
        }
    }

    if (encontrou == 0) {
        printf("Banda nao cadastrada\n");
    }
}