// #include <stdio.h>
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int first=arr[0];
//     for(int i=0;i<5;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[4]=first;
//     for(int k=0;k<5;k++){
//         printf("%d\n",arr[k]);

//     }
//     return 0;

// }
// arr[5]=20,30,40,50,10


/*#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 2};
    int isTrue = 1;
    for (int i = 0; i < 5 / 2; i++)
    {
        if (arr[i] != arr[5 - i - 1])
        {
            isTrue = 0;
        }
    }
    if (isTrue == 1)
    {
        printf("yes");
    }
    else
    {
        printf("palindrom nhi haii");
    }
    return 0;
}*/
//palindrom nhi haii

#include <stdio.h>
int main(){
    int arr[6]={1,-5,3,-4,5,7};
    int maxSum=arr[0];
    for(int i=0;i<6;i++){
        int currSum=0; // Initialize currSum for each new starting point
        for(int j=i;j<6;j++){ // Inner loop starts from 'i'
            currSum=currSum+arr[j];
            if(currSum>maxSum) {
                maxSum=currSum;
            }
        }
    }
    printf("%d",maxSum);
}
//maxsum=12