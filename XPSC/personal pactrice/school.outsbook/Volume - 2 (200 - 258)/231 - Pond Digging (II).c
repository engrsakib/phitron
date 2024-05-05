#include <stdio.h>

int main() {
    int length, width, borderLength, borderWidth;
    scanf("%d %d %d %d", &length, &width, &borderLength, &borderWidth);
    
    int largerArea = (length + 2 * borderLength) * (width + 2 * borderWidth);
    int smallerArea = length * width;
    int edgeArea = largerArea - smallerArea;
    
    printf("%d\n", edgeArea);
    
    return 0;
}
