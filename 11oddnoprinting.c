#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=1;j<=n+1-i;j++){
            printf("%d",k);
            k=k+2;

        }
        printf("\n");
        n--;
    }
}