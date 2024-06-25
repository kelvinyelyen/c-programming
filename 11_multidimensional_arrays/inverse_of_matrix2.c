#include <stdio.h>

main()
{
    int a[3][3], c[3][3], adj[3][3], i, j, m, n, det = 0;

    printf("Please Enter the Number of ROWS: ");
    scanf("%d", &m);

    printf("Please Enter the Number of COLUMNS: ");
    scanf("%d", &n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            printf("\nPlease Enter the Element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("\t%d", a[i][j]);
    }

    i = 0;

    for (j = 0; j < n; j++)
        det = det + a[i][j] * (a[i + 1][(j + 1) % 3] * a[i + 2][(j + 2) % 3] - a[i + 1][(j + 2) % 3] * a[i + 2][(j + 1) % 3]);
    printf("\nThe Determinant: %d", det);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            c[i][j] = a[(i + 1) % 3][(j + 1) % 3] * a[(i + 2) % 3][(j + 2) % 3] - a[(i + 1) % 3][(j + 2) % 3] * a[(i + 2) % 3][(j + 1) % 3];

    printf("\n");
    printf("The Matrix of Cofactors:");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("\t%d", c[i][j]);
    }

    printf("\n");
    printf("The Transpose of the Matrix of Cofactors: ADJOINT");
    for (j = 0; j < m; j++)
    {
        printf("\n");
        for (i = 0; i < n; i++)

            printf("\t%d", c[i][j]);
    }
}