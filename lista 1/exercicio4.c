#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int D = 0;
    printf("Quantas Disciplinas são ofertadas: ");
    scanf("%d", &D);
    int A, S, m, c, matriculados, aprovados, diferenca, maior, contador = 0;
    int cmaior[10];
    while (scanf("%d %d %d", &A, &S, &m) != EOF){
        maior = 0;
        contador = 0;
        for (int i = 1; i <= m;i++){
            scanf("%d %d %d", &c, &matriculados, &aprovados);
            diferenca = matriculados - aprovados;
            if (diferenca > maior){
                maior = diferenca;
                contador = 0;
                cmaior[contador] = c;
                contador++;
            } else if (diferenca == maior){
                cmaior[contador] = c;
                contador++;
            }
        }
        qsort(cmaior, contador, sizeof(int), comparar);
        printf("%d/%d \n", A, S);
        for (int i = 0; i < contador; i++ ){
            printf("%d ", cmaior[i]);
        }
        printf("\n");
        printf("\n");
    }
}