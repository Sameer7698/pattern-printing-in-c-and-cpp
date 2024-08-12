#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        int a=0;
       if(i==1){ for(int j=1;j<=n+1-i;j++){
            printf("%d",j);
            a++;
        }
         for(int j=1;j<=n-1;j++){
                a--;
                printf("%d",a);
                
            }
}

        if(i>1){for(int j=1;j<=n+1-i;j++){
            printf("%d",j);
            a++;
        }
        
        for(int j=1;j<=i-1;j++){
            printf(" ");
            a++;
        }
        }
        if(i>2){
            for(int j=1;j<=i-2;j++){
                printf(" ");
                a--;
            }
        }
         
        if(i>1){
            for(int j=1;j<=n+1-i;j++){
                a--;
                printf("%d",a);
            }
            
        }
        printf("\n");

    }
}