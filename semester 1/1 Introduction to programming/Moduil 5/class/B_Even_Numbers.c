#include <stdio.h>
#include <math.h>

int main() {
    int a, b = 2;
    scanf("%d", &a);
    if(a  == 1)
    {
        printf("-1");
    }
    else
    {
        while(b <= a){
        printf("%d\n",b);
        b = b + 2;
    }
    }

    return 0;
}
