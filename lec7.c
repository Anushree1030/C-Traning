#include<stdio.h>
int main(){
    int n=8;
    int t1=0;
    int 2=1;
    int next;
    for(int i=1;i<=n;i++){
        printf("%d",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return 0;
}