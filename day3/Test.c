#include <stdio.h>


void swap(int *a, int *b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

int main() { 
    int n, m; 
    printf("Enter row:\n"); 
    scanf("%d", &n); 
    printf("Enter column:\n"); 
    scanf("%d", &m); 

    if (n != m) {
        printf("Error (Rows must equal Columns)\n");
        return 1;
    }

    int arr[n][m]; 
    printf("Enter elements:\n"); 
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < m; j++) { 
            scanf("%d", &arr[i][j]); 
        } 
    } 

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            printf("%d ", arr[i][j]); 
        } 
        printf("\n"); 
    } 

    
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < m; j++) { 
            swap(&arr[i][j], &arr[j][i]); 
        } 
    } 

    
    for (int i = 0; i < n; i++) { 
        int low = 0; 
        int high = m - 1; 
        while (low < high) { 
            swap(&arr[i][low], &arr[i][high]); 
            low++; 
            high--; 
        } 
    } 

    printf("\nRotated Matrix :\n"); 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            printf("%d ", arr[i][j]); 
        } 
        printf("\n"); 
    } 

    return 0; 
}
