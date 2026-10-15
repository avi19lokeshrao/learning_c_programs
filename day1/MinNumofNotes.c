#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    /*int c100=n/100;
    int r=n%100;
    int c50=n/50;
    n=n-(c10*50);
    int c20=n/20;*/
    int c=0;
    c+=n/100;
    n%=100;
    c+=n/50;
    n%=50;
    c+=n/20;
    n%=20;
    c+=n/10;
    n%=10;
    c+=n/5;
    n%=5;
    c+=n/2;
    n%=2;

    c+=n;

    


    printf("%d",c);
}
