#include <stdio.h>

int main()
{
    int a[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\n", *(*(a + i) + j));
        }
    }

    return 0;
}