#include <stdio.h>

int main() {
    int X, X1, X2;
    int Proma, Rimi, Monisha;

    
    scanf("%d %d %d", &X, &X1, &X2);

    
    Proma = X + X2;
    Rimi = Proma - X1;
    Monisha = Proma + X2;

   
    printf("Proma %d, Rimi %d, Monisha %d\n", Proma, Rimi, Monisha);

    return 0;
}
