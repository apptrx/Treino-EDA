#include <stdio.h>

int main(){
    char nome_completo[101], nome[101], sobrenome[101], sobrenome2[101];
    scanf ("%[^\n]", nome_completo);
    int contador = 0, auxiliar_sobrenome = 0, i = 0;
    for (i = 0; nome_completo[i] != '\0'; i++){
        if (nome_completo[i] <= 90 && nome_completo[i] > 64){
            nome_completo[i] = nome_completo[i]+32;
        }
        contador++;
    }
    for (i = 0; nome_completo[i] != ' '; i++){
        nome[i] = nome_completo[i];
    }
    nome[i] = '\0';
    int j = 0;
    for (i = contador-1; nome_completo[i] != ' '; i--){
        sobrenome[j] = nome_completo[i];
        auxiliar_sobrenome++;
        j++;
    }
    sobrenome[j] = '\0';
    int h = 0;
    for (i = auxiliar_sobrenome-1; i >= 0; i--){
        sobrenome2[h] = sobrenome[i];
        h++;
    }
    sobrenome2[h] = '\0';
    printf ("%s.%s@unb.br\n", nome, sobrenome2);
    return 0;
}