#include <stdio.h>

int main (){
    int n = 0;
    int nespaco = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){ //aqui é a linha que eu to
        
        for (int e = 0; e <= n - i; e++){
            printf(" ");
        }
        for(int j = 1; j <= 2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    // 2x - 1, fórmula para asteríscos
    // (x - 1)/2, fórmula para os espaços da linha 0
}