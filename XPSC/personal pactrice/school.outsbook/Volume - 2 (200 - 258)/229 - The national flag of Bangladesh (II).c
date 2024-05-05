#include <stdio.h>

int main() {
    int L;
    scanf("%d", &L);
    
    int W = (L * 6) / 10;
    int R = L / 5;
    
    printf("%d %d\n", W, R);
    
    return 0;
}
