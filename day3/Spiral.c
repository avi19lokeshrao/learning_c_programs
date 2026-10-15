#include <stdio.h>

int main() {
	int n,m;
	printf("enter row:\n");
	scanf("%d",&n);
	printf("enter column:\n");
	scanf("%d",&m);
    int mat[n][m]; 
    int t= 0;
    int b= m-1;
    int l= 0;
    int r= n-1;
    printf("enter elements\n");
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		scanf("%d",&mat[i][j]);
		}
	}
    while (t<=b && l<=r) {
        for (int i = l; i <= r; i++) {
            printf("%d ", mat[t][i]);
        }
        t++;

        for (int i = t; i <= b; i++) {
            printf("%d ", mat[i][r]);
        }
        r--;

        if (t<= b) {
            for (int i = r; i >= l; i--) {
                printf("%d ", mat[b][i]);
            }
            b--;
        }

        if (l<= r) {
            for (int i = b; i >= t; i--) {
                printf("%d ", mat[i][l]);
            }
            l++;
        }
    }
    return 0;
}

