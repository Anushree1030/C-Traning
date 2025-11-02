//check palindrome using recursion
// #include <stdio.h>
// int isPalindrome(int arr[],int i,int j){
//     if(i>=j){
//         return 1;
//     }
//     if (arr[i]!=arr[j]){
//         return 0;
//     }
//     return isPalindrome(arr,i+1,j-1);
// }
// int main(){
//     int arr[]={1,2,3,2,1};
//     int StartIndex=0;
//     int EndIndex=2;
//     int data=isPalindrome(arr,StartIndex,EndIndex);
//     printf("%d",data);
//     return 0;
// }



//binary search using recursion
// #include <stdio.h>
// int binarySearch(int arr[],int i,int j,int target){
//     if(i>j){
//         return -1;
//     }
//     int mid=(i+j)/2;
//     if(arr[mid]==target){
//         return mid;
//     }else if (arr[mid]<target){
//         return binarySearch(arr,mid+1,j,target);

//     }else{
//         return binarySearch(arr,i,mid-1,target);
//     }
    
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int i=0;
//     int j=1;
    // int target=4;
    // int data=binarySearch(arr,i,j,target);
    // printf("%d",data);
    // return 0;
//}



//sorted array check using recursion
// #include <stdio.h>
// int sorted (int arr[],int i,int j){
//     if(i>=j){
//         return 1;
//     }
//     if (arr[i]>arr[i+1]){
//         return 0;
//     }
//     return sorted(arr,i+1,j);


// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int i=0;
//     int j=4;
//     int data=sorted(arr,i,j);
//     printf("%d",data);
//     return 0;
// }
