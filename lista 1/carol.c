#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    long long int T = pow(10, 15);
    int S = 0; //sendo S a variável auxiliar da sigla
    char palavra[T], sigla[3];
    scanf ("%[^\n]", palavra); //foi utilizado desta maneira para que desconsidere caracteres indesejados
    scanf ("%s", sigla);
/*
    if (sigla[2] == 'X'){ //verifica primeiramente a segunda condição para que resulte em Sim
        for (int i = 0; i < strlen(palavra); i++){
            if (palavra[i] == sigla[S]-32){
                S += 1;
            }
        }
        if (S >= 2){
            printf ("Sim\n");
        }
        else {
            printf ("Não\n");
        }
    }
*/
    if {
        if ()
        for (int i = 0; i < strlen(palavra); i++){
            if (palavra[i] == sigla[S]-32){
                S += 1;
            }
        }
        if (sigla[2] == 'X'){
            if (S >= 2){
                printf ("Sim\n");
            }
            else {
                printf ("Não\n");
            }
        }
        else{
            if (S == 3){
                printf ("Sim\n");
            }
        else {
            printf ("Não\n");
        }
        }
    }
//    printf ("%s %s\n", string, sigla);

    return 0;
}