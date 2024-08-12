#include<stdio.h>
void main(){
    int n;
    printf("Enter the no. of starts per line in plus:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n/2+1||j==n/2+1) printf("*");
              else printf(" ");
        }
        printf("\n");
    }
}