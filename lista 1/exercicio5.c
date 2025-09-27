 #include <stdio.h>

#define MAX 1000+1

int main() {
    int Po, l = 0, c = 0;
    scanf("%d ", &Po);

    int P = Po;

    int Sx, Sy, Ex, Ey;
    char m[MAX][MAX];
    while (scanf("%c", &m[l][c]) != EOF) {
        if (m[l][c] == 'S') {
            Sx = c;
            Sy = l;
        }
        else if (m[l][c] == 'E') {
            Ex = c;
            Ey = l;
        }

        if (m[l][c] == '\n') {
            ++l;
            c = 0;
        }
        else ++c;
    }

    ++l;

    int ds[] = { 1, 0, -1, 0, 1 };
    int Ax = Sx, Ay = Sy;

    while (!(Sx == Ex && Sy == Ey) && P > 0) {
        for (int i = 0; i < 4; ++i) {
            int x = Sx + ds[i];
            int y = Sy + ds[i + 1];

            if (x < 0 || x >= c || y < 0 || y >= l) continue;

            if (x == Ax && y == Ay) continue;

            if (m[y][x] == '_' || m[y][x] == 'o' || m[y][x] == 'E') {
                Ax = Sx;
                Ay = Sy;
                Sx = x;
                Sy = y;
                P -= (m[y][x] == 'o' ? 1 : 0);
                break;
            }
        }
    }

    if (P == 0){
        printf("Todos morreram :)\n");
    }else if (P == Po){
        printf("Nenhum morreu :(\n");
    }else{
        printf("%d encontraram o vovo\n", P);
    }
}