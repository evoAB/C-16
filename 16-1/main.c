#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], b[3][3];
    printf("Enter first matrix values 3x3 : ");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    printf("Enter Second matrix values 3x3 : ");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&b[i][j]);

    printf("Sum of two matrices 3x3 : \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("\t%d",a[i][j]+b[i][j]);
        printf("\n");
    }

    return 0;
}
