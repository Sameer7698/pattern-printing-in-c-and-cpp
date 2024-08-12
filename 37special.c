#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int min;
        for(int j=1;j<=n;j++){
            min=i;
            if(i>j) min=j;
            
            printf("%d",min);
        }
        printf("\n");
    }
}   