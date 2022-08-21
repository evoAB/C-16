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
    {
        int sum1 =0, sum2=0;
        for(int j=0;j<3;j++)
        {
            sum1+=a[i][j];
            sum2+=a[j][i];
        }
        printf("Sum of %d row : %d\n",i+1,sum1);
        printf("Sum of %d column : %d\n\n",i+1,sum2);
    }
    return 0;
}
