#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// #include <conio.h>
#include <limits.h>
#include <ctype.h>

int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if ((i == j || i + j == row - 1) && a[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
                if ((i != j && i + j != row - 1) && a[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    else
    {
        flag = 0;
    }

    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
