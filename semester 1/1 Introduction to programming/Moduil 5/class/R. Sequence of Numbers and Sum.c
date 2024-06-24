#include <stdio.h>

int main() {
    int N, M;
    int sum;

    while (1) 
    {
        scanf("%d %d", &N, &M);

        // Check for termination condition
        if (N <= 0 || M <= 0) {
            break;
        }

        if(N >= M)
        {
           sum = 0;
            // Calculate the sum of numbers between N and M
            for (int i = M; i <= N; i++) {
                sum += i;
            }

            // Output the result
            printf("%d", M);
            for (int i = M + 1; i <= N; i++) {
            printf(" %d", i);
            }
            printf(" sum =%d\n", sum);
        }
        else
        {
         sum = 0;
        // Calculate the sum of numbers between N and M
        for (int i = N; i <= M; i++) {
            sum += i;
        }

        // Output the result
        printf("%d", N);
        for (int i = N + 1; i <= M; i++) {
            printf(" %d", i);
        }
        printf(" sum =%d\n", sum);
        }

        
          
    }

    
    return 0;
    }
