// //trapping of rainwater between buildings.
// #include <stdio.h>
// int main(){
//     int leftMax[6];
//     int height[6]={5,6,0,3,5,2};
//     int rightMax[6];
//     int water=0;
//     leftMax[0]=height[0];
//     for(int i=1; i<6; i++){
//         if(height[i]>leftMax[i-1]){
//             leftMax[i]=height[i];
//         }else{
//             leftMax[i]=leftMax[i-1];
//         }
//     }
//     rightMax[5]=height[5];
//     for(int i=4; i>=0; i--){
//         if(height[i]>rightMax[i+1]){
//             rightMax[i]=height[i];
//         }else{
//             rightMax[i]=rightMax[i+1];

//         }
//     }
//     for (int i=0; i<6; i++){
//         int minHeight;
//         if (leftMax[i]<rightMax[i]){
//             minHeight=leftMax[i];
//         }
//         else{
//             minHeight=rightMax[i];
//         }
//         water=water+(minHeight-height[i]);
//     }
//     printf("%d",water);
    
// }  
// output=7










#include <stdio.h>
int main(){
    int arr[5]={0,1,2,3,32,0};
    int j=0;
    for(int i=0; i<5; i++){
        if(arr[i]!=0){
            int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
            }
        }
        for(int i=0; i<5; i++){
            printf("%d",arr[i]);
        }
    }
    
