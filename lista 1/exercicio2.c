#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int m = 1; m <= i; m++){
            if (i < 10) {
                printf("0%d ", i);
            } else{
            printf("%d ", i);
            }
        }
    printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= n; i++){
        for (int m = 1; m <= i; m++){
            if (m < 10) {
                printf("0%d ", m);
            } else{
            printf("%d ", m);
            }
        }
    printf("\n");
    }
    return 0;
}