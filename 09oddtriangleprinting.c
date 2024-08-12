#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int k=1;
        for( int j=1;j<=i;j++){
            
            /*if(k%2!=0)*/ {printf("%d",k);}
            k=k+2;
        } 
        printf("\n");
    }
}