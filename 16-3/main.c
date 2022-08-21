#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    printf("Enter elements of 3x3 matrix : ");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    printf("Transpose of a given matrix \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("\t%d",a[j][i]);
        printf("\n");
    }
    return 0;
}
