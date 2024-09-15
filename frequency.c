//C program to find the frequency of even numbers in matrix (1*5)

#include <stdio.h>
int main()
{
    int arr[3][3], i, j, count = 0;
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                count++;
            }
        }
    }
    printf("The number of even numbers in the matrix is: %d", count);
    return 0;
}