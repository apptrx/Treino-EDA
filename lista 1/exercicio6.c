#include <stdio.h>

int main (){
    int L, F, num; // fileira (quantas linhas da matriz) e quantos lugares (quantas colunas)
    char letradafileira, cadeira;
    scanf("%d %d", &F, &L);
    int cinema[F][L];
    for (int i = 0; i < F; i++){
        for (int j = 0; j < L; j++){
            cinema[i][j] = 0;
        }
    }
    // A = 65 na tabela ASCII
    while (scanf(" %c%d", &cadeira, &num) != EOF){
        int linha_idx = F - 1 - (cadeira - 'A');
        int coluna_idx = num - 1;
        cinema[linha_idx][coluna_idx] = 1; 
    }

    printf("  ");
    for (int j = 1; j <= L; j++){
        printf("%02d ", j);
    } // os números em cima
    printf("\n");
    
    for (int i = 0; i < F; i++){
        letradafileira = 'A' + (F - i - 1);
        printf("%c ", letradafileira);
        for (int j = 0; j < L; j++) {
            // Verifica o DADO na matriz e decide o que EXIBIR
            if (cinema[i][j] == 1) {
                printf("XX ");
            } else {
                printf("-- ");
            }
        }
        printf("\n"); // Terminou a fileira, pula para a próxima linha
    } // As letras
    
    return 0;
}