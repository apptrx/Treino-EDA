#include <stdio.h>


int main(){
    int D;
    scanf("%d", &D);

    int A, S, m;
    
    while (scanf("%d %d %d", &A, &S, &m) != EOF){
        int cmaior[m]; 
        int c, matriculados, aprovados, diferenca;
        int maior = -1; 
        int contador = 0;

        for (int i = 0; i < m; i++){ 
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

        for (int i = 0; i < contador - 1; i++) {
            for (int j = 0; j < contador - i - 1; j++) {
                if (cmaior[j] > cmaior[j + 1]) {
                    int temp = cmaior[j];
                    cmaior[j] = cmaior[j + 1];
                    cmaior[j + 1] = temp;
                }
            }
        }

        printf("%d/%d\n", A, S);
        
        for (int i = 0; i < contador; i++ ){
            printf("%d ", cmaior[i]);
        }
        printf("\n");
        printf("\n");
    }
    
    return 0;
}
/*
10
2018 1 3
5 50 38
8 65 40
3 80 30
2018 2 5
2 40 25
1 70 70
3 80 69
8 65 55
9 65 50
2019 1 4
8 65 39
4 120 94
0 40 28
6 45 19
*/