#include <stdio.h>
int climb(int n){
    if (n <= 2) {
           return n;
    }
    return climb(n - 1) + climb(n - 2);
}
int main()
{
    printf("%d",climb(5));
    return 0;
}