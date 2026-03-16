
#include <stdio.h>

int main()
{

    int row, col;

    printf("Enter the array row size:");
    scanf("%d", &row);

    printf("Enter the array col size:");
    scanf("%d", &col);

    int number[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter array element: [%d][%d]", i, j);
            scanf("%d", &number[i][j]);
        }
    }

    printf("\nTranspose matrix:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", number[j][i]);
        }
        printf("\n");
    }

    return 0;
}