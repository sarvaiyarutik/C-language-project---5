#include <stdio.h>

int main()
{

    int row, col;
    int r, c;
    int sum = 0;

    printf("Enter the array row size: ");
    scanf("%d", &row);

    printf("Enter the array col size: ");
    scanf("%d", &col);

    int number[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the array element [%d][%d]: ", i, j);
            scanf("%d", &number[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &r);

    sum = 0;

    printf("Element of row %d : ", r);

    for (int j = 0; j < col; j++)
    {
        printf("%d ", number[r][j]);
        sum += number[r][j];
    }

    printf("\nThe sum of row %d : %d\n", r, sum);


    printf("Enter column number: ");
    scanf("%d", &c);

    sum = 0;

    printf("Element of col %d : ", c);

    for (int i = 0; i < row; i++)
    {
        printf("%d ", number[i][c]);
        sum += number[i][c];
    }

    printf("\nThe sum of column %d: %d", c, sum);

    return 0;
}