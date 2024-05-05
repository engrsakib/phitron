#include <stdio.h>

int main() {
    int S, N;
    scanf("%d %d", &S, &N);

    int Priyom = (S - N) / 4;
    int Priyonti = Priyom * 2;
    int Odry = Priyom + N;

    printf("Priyom: %dKg.\n", Priyom);
    printf("Priyonti: %dKg.\n", Priyonti);
    printf("Odry: %dKg.\n", Odry);

    return 0;
}
