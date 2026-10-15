#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter size of square: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            // Print stars on boundary
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  "); // spaces inside
            }
        }
        printf("\n");
    }

    return 0;
}
