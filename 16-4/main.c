#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    printf("Enter the matrix : ");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    int sum=0,i=0;
    for(int k=0; k<3; k++)
    {
        sum+=a[i][i];
        i++;
    }
    printf("Sum of Right diagonal matrix : %d",sum);

    return 0;
}
