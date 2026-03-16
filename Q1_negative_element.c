

#include <stdio.h>

int main()
{

    int array;

    printf("Enter the array size:");
    scanf("%d", &array);

    int number[array];

    for (int i = 0; i < array; i++)
    {
        printf("Enter array elements:[%d] = ", i);
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < array; i++)
    {
        if (number[i] < 0)
        {
            printf("Negative element from an array%d", number[i]);
        }
    }

    return 0;
}