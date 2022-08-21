#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    printf("Enter the matrix : ");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);

    for(int i=0; i<3; i++)
        for(int j=0; j<i; j++)
            a[i][j]=0;
    printf("Upper triangular Matrix : \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("\t%d",a[i][j]);
        printf("\n");
    }
    return 0;
}
