#include<stdio.h>
int main(){
    int amount,n,c=0;
    int money[7]={100,50,20,10,5,2,1};
    printf("Enter amount for minimum number of notes:\n");
    scanf("%d",&amount);
    for(int i=0;i<7;i++){
        n=amount/money[i];
        c=c+n;
        amount=amount % money[i];
    }
    printf("Notes: %d",c);
    return 0;
}