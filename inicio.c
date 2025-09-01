void leeimpremesoma(void){
    int x, soma = 0;
    while(scanf("%d", &x) == 1){
        soma += x;
    }
    printf("%d\n", soma);
}
int main(void){
    char buf[10];
    while (scanf("%s", buf) == 1)
    {
        leeimpremesoma();
    }
    return 0;

}

