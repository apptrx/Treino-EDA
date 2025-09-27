#include <stdio.h>

int main (){
    int n = 0;
    int nespaco = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){ 
        
        for (int e = 0; e <= n - i; e++){
            printf(" ");
        }
        for(int j = 1; j <= 2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
}