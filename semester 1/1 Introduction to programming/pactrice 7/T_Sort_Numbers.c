#include <stdio.h>

void printAscending(int arr[]) {
    int a = arr[0], b = arr[1], c = arr[2];
    int temp;
    // Sorting the array
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Printing the sorted array and the original sequence
    printf("%d\n%d\n%d\n\n", arr[0], arr[1], arr[2]);
    printf("%d\n%d\n%d", a, b, c);
}

int main() {
    int input[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &input[i]);
    }

    printAscending(input);

    return 0;
}
