//bit manupulation
//find unique element using EX-OR
// #include<stdio.h>
// int main(){
//     int arr[5]={4,5,3,4,5};
//     int a=0;
//     for(int i=0;i<5;i++){
//         a=a^arr[i];

//     }
//     printf("%d",a);
//     return 0;
// }



//swap two numbers using ex-or
// #include<stdio.h>
// int main(){
//     int a=5;
//     int b=3;
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("a=%d b=%d",a,b);
//     return 0;

// }


//left sift
// #include <stdio.h>
// int main(){
//     int a=4;
//     int b=a<<1;
//     printf("%d",b);
//     return 0;
// }

//find the missing number using ex-or
// #include <stdio.h>
// int main(){
//     int arr[4]={1,2,4,5};
//     int xor=0;
//     int xor1=0;
//     for(int i=1;i<=5;i++){
//     xor=xor^i;
//     }
//     for(int i=0;i<4;i++){
//         xor1=xor1^arr[i];
//     }
//     printf("%d",xor^xor1);
    
    
// }
