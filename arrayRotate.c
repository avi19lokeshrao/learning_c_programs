#include <stdio.h>
void main()
{
    int arr[3][3]={{1,2,3,},{4,5,6,},{6,7,8}};

    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    printf("%d",arr[i][j]);
    printf("\n");
}
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][2 - j];
            arr[i][2 - j] = temp;
    }
}
printf("rotated array\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    printf("%d",arr[i][j]);
    printf("\n");
}
}


