// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,4};
//     //printf("%d",arr[45]);
//     for(int i=3;i>=0;i--){
//      printf("%d",arr[i]);
//     }
//     return 0;

// }
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,4};
//     //printf("%d",arr[45]);
//     for(int i=0;i<3;i++){
//      printf("%d",arr[i]);
//     }
//     return 0;

// }
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,4};
//     int sum=0;
//     for(int i=0;i<3;i++){
//      sum= sum+arr[i];
//     }
//     printf("%d",sum);
//     return 0;

// }
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,4,3};
//     int max=arr[0];
//     for(int i=0;i<4;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
     
//     }
//     printf("%d",max);
//     return 0;

// }
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,4,3};
//     int min=arr[0];
//     for(int i=0;i<4;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
     
//     }
//     printf("%d",min);
//     return 0;

// }
#include <stdio.h>
int main(){
    int arr[5]={1,2,4,3};
    int even=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i] /2){
            even=arr[i];
        }
     
    }
    printf("%d",even);
    return 0;

}