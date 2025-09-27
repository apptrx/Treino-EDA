#include <stdio.h>
#include <stdlib.h>

int main(){
    char S[4];
    char *A = calloc (100001, sizeof(char)); // alocar dinâmicamente, ponteiro uiui, #primeiravez
    int indice = 0, i = 0;
    if (A == NULL){
        return 1;
    }

    scanf("%100000[^\n]", A); // "%s ", esse espaço significa consumir espaço, tab, \n até achar um que não seja 
    getchar(); // tira o \n que ficou na entrada, para não bugar no próximo scanf
    // "%[...]", notação para fazer não ler, criar exceção de caractér, até o enter é esse, mas deixa na entrada
    scanf("%3s", S); // ler só três primeiros

    int tamanhoA = 0;
    while(A[tamanhoA] != 0){ // != 0, pois é um calloc, tudo tá com 0
        tamanhoA++;
    }

    if (S[2] == 'X'){
        for (int j = 0; j < tamanhoA; j++){
            if (S[i] == A[j] - 32){
                i++;
            }
        }
        if (i >= 2){
            printf("Sim \n");
        } else{
            printf("Nao \n");
        }
    } else {

        for (int j = 0; j < tamanhoA; j++){
            if (S[i] == A[j] - 32){
                i++;
            }
        }
        if (i >= 3){
            printf("Sim \n");
        } else{
            printf("Nao \n");
        }

    }
    free(A);
    return 0;
}