#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int A[n][m];
    int B[n][m];
    int C[n][m];

    int row, col;

    /* Input elements in first matrix*/
    printf("Enter elements in matrix A of size %dx%d: \n",n,m);
    for(row=0; row<n; row++)
    {
        for(col=0; col<m; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input elements in second matrix */
    printf("Enter elements in matrix A of size %dx%d: \n",n,m);
    for(row=0; row<n; row++)
    {
        for(col=0; col<m; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    /*
     * Adding both matrices A and B
     * and stores result in matrix C
     */
    for(row=0; row<n; row++)
    {
        for(col=0; col<m; col++)
        {
            /* Cij = Aij + Bij */
            C[row][col] = A[row][col] + B[row][col];
        }
    }


    /* Printing the value of matrix C */
    printf("\nSum of matrices A+B = \n");
    for(row=0; row<n; row++)
    {
        for(col=0; col<m; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
