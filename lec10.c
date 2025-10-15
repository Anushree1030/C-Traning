#include<stdio.h>
int main(){
/*for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int k=3;k>i;k--){
            printf(" ");
        }
        for(int k=3;k>i;k--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<4;i++){
        for(int j=3;j>i;j--){
            printf("*");
        }
        for(int k=0;k<=i;k++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf(" ");
        }
        for(int j=3;j>i;j--){
            printf("*");
        }

        printf("\n");
    }*/
   int n=5;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || i==n || j==1 || j==n){
            printf("*");
        }else{
            printf(" \n");
        }
    }
   }
   printf("\n");
   }