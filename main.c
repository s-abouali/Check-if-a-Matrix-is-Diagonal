#include <stdio.h>

int main()
{
    int M[100][100];
    int N, i, j;
    int diagonale = 1;

    printf("Enter the size N of the matrix: ");
    scanf("%d", &N);


    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(i != j && M[i][j] != 0)
            {
                diagonale = 0;
            }
        }
    }

    if(diagonale)
        printf("\nThe matrix is diagonal.\n");
    else
        printf("\nThe matrix is NOT diagonal.\n");

    return 0;
}
