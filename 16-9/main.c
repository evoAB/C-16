#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j;
    printf("Enter the matrix : ");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);

    int zero=0, nozero=0;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            if(a[i][j]==0)
                zero++;
            else
                nozero++;
    if(zero>nozero)
        printf("It is a sparse matrix");
    else
        printf("It is not a sparse matrix");
    return 0;
}
