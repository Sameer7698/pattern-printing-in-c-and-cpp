#include<stdio.h>
void main(){
    int n,m;
    printf("Enter the no. of stars in breath n:= ");
    scanf("%d",&n);
    printf("Enter the no. of stars in length m:= ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==1||i==1||i==n||j==m) printf("*");
            else printf(" ");
        }
           printf("\n");
    }

}