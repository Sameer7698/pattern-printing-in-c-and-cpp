#include<stdio.h>
void main(){
    char ch;
    printf("Enter the last  alfabet :=");
    scanf("%c",&ch);
    for(char i='A';i<=ch;i++){
        for(char j='A';j<=i;j++)
        { printf("%c",j);

        }
        printf("\n");
    }

}