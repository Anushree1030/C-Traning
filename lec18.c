// #include <stdio.h>
// //swap
// int x=10;
// int y=20;
// int swap (int *x,int* y){
// int temp =*x;
// *x=*y;
// *y=temp;
// printf("%d,%d",*x,*y);

// }
// int main(){
//     int x=10;
//     int y=20;
//     swap(&x,&y);

// }

    //POINTER

// #include <stdio.h>
// //swap without using third variable
// int x=10;
// int y=20;
// int swap (int *x,int* y){
// *x=*x+*y;
// *y=*x-*y;
// *x=*x-*y;


// printf("%d,%d",*x,*y);

// }
// int main(){
//     int x=10;
//     int y=20;
//     swap(&x,&y);

//}




// #include <stdio.h>
// int main(){
// int arr[4]={1,2,3,4};
// int *p=arr;
// for (int i=0;i <4;i++){
//     printf("%d",*(p+i));
// }
// }


//2 D array
// #include <stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d",arr[i][j]);
//         }printf(" ");
//     }
// }

// #include <stdio.h>
// //2D array
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }printf("\n");
//     }
// }


//sum of 2 D array
// #include <stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int sum=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum=sum+arr[i][j];         
//         }
//     }
//     printf("%d",sum);
// }

// #include <stdio.h>
// //2D maximum sum
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int maxSum=arr[0][0];
//     for(int i=0;i<3;i++){
//         int currSum=0; 
//         for(int j=0;j<3;j++){ 
//             currSum=currSum+arr[i][j];
//             if(currSum>maxSum) {
//                 maxSum=currSum;
//             }
//         }
//     }
//     printf("%d",maxSum);
// }


// #include <stdio.h>
// //2D minimum sum
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int minSum=arr[0][0];
//     for(int i=0;i>3;i++){
//         int currSum=0; 
//         for(int j=0;j>3;j++){ 
//             currSum=currSum+arr[i][j];
//             if(currSum<minSum) {
//                 minSum=currSum;
//             }
//         }
//     }
//     printf("%d",minSum);
// }



// #include <stdio.h>
// //row wise sum
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
//     for(int i=0;i<3;i++){
//         int sum=0; 
//         for(int j=0;j<3;j++){ 
//            sum=sum+arr[i][j];
//             }
        
    
//     printf("%d\n",sum);
//         }
// }


// #include <stdio.h>
// //column wise sum
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
//     for(int i=0;i<3;i++){
//         int sum=0; 
//         for(int j=0;j<3;j++){ 
//            sum=sum+arr[j][i];
//             }
        
    
//     printf("%d\n",sum);
//         }
//  }



// #include <stdio.h>
//2D into 1D
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
//     int arr[9];
//     int k=0;
//     for(int i=0;i<3;i++){
//      for(int j=0;j<3;j++){
//         arr1[k]=arr[i][j];
//         k++;
//      }
//      printf("%d\n",arr1[k]);
//     }
// }
