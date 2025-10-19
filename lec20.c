//find the maximum sum subaray of size k
// #include <stdio.h>
// int main(){
// int arr[8]={2,1,5,4,7,8,1,2};
//  int n=sizeof(arr)/4 ;
// int k=2;
// int msum=1;
// int wsum;
// for(int i=0;i<k;i++){
//     wsum+=arr[i];
// }
// for(int i=k;i<n;i++){
//  wsum+=arr[i]-arr[i-k];
//  if(wsum>msum){
//     msum=wsum;
// }
// }
// printf("%d",msum);
// }


// #include <stdio.h>
// //negative value
// int main(){
//     int arr[]={12,-1,-7,8,-15,30,16,28};
//     int n=sizeof(arr)/sizeof(arr[0]) ;
//     int k=3;
//     for(int i=0;i<=n-k;i++){
//         int found=0;
//         for(int j=i;j<i+k;j++){
//             if(arr[j]<0){
//                 printf("%d",arr[j]);
//                 found=1;
//                 break;
//             }
//         }
//         if(!found){
//             printf(" 0 ");

//         }
        

//     }
//     return 0;
// }


#include <stdio.h>
int main(){
    int arr[]={1,3,-1,-3,5,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    for(int i=0;i<=n-k;i++){
        int max= arr[i];
        for(int j=1;j<k;j++){ 
            if(arr[i+j]>max){
                max=arr[i+j];
            }
            printf(" %d ",max);
        }
    }
   printf(" \n ") ;
   return 0;
}