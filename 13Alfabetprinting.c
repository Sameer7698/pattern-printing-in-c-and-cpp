#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //int a=65;
        for(int j=65;j<=i+65;j++){
            
           // if(a<=n+65)
            //{
                printf("%c",j);
                       // a++;}
        }
        printf("\n");
    }
    return 0;
}