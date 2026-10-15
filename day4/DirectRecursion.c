#include <stdio.h>

int r(int n) {
    if (n > 100) {
        return n - 10;
    }
    else{
    return r(r(n+11));
    }
}

int main() {
    int a= 90;
    printf("%d: %d\n",a, r(a));
    return 0;
}
