#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n := ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            int d=a+64;

            if(i%2!=0){printf("%d",j);}
            else {printf("%c",d);}
            a++;
        }
        printf("\n");
    }
}