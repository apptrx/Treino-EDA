#include <stdio.h>

int main() {
    int n = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n > 100){
        printf("Tem que ser menor que 100");
    } else {
        for (int i = 1; i <= n; i++){
                for (int m = 1; m <= i; m++){
                    if (m < 10) {
                        printf("0%d ", m);
                    }
                    printf("%d ", m);
                }
            printf("\n");
        }
    }
    return 0;
}