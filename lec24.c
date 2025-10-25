//dynamic memory allocation (DMA)
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int n;
//     printf("Enter size:");
//     scanf("%d",&n);
//     int *arr=(int *)malloc(n * sizeof(int));

//     printf("Enter %d element:\n",n);
//     for(int i =0; i<n; i++)
    
//     scanf("%d",&arr[i]);
    
//     return 0;
// }




   //rearranging araay using malloc
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));

    printf("Enter %d element:\n",n);
    for(int i =0; i<n; i++)
    {
    scanf("%d",&arr[i]);
    }
    int j=0;
    for (int i=0;i<n;i++){
        if(arr[i]==0){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[j]=arr[i];
            j++;
        }
        printf("%d",arr[j]);
    }
    return 0;
}


       //relloc function
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
    
//     int n;
//     printf("Enter size:");
//     scanf("%d",&n);
//     int *arr=(int *)malloc(n * sizeof(int));

//     printf("Enter %d element:\n",n);
//     for(int i =0; i<n; i++)
//     {
//     scanf("%d",&arr[i]);
//     }
//     printf("\nNow enter new size:");
//     int newSize;
//     scanf("%d",&newSize);
//     arr=(int *)realloc(arr,newSize*sizeof(int));
//     printf("Enter %d new elements:\n",newSize);
//     for (int i = 0; i< newSize; i++)
//     {scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i< newSize; i++)
//     {
//         printf("%d",arr[i]);
//     }
    
//     return 0;
// }


     // calloc
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
    
//     int n;
//     printf("Enter size:");
//     scanf("%d",&n);
//     int *arr=(int *)calloc(n ,sizeof(int));

//     printf("Enter %d element:\n",n);
//     for(int i =0; i<n; i++)
//     {
//     scanf("%d",&arr[i]);
//     }
//     printf("\nNow enter new size:");
//     int newSize;
//     scanf("%d",&newSize);
//     arr=(int *)realloc(arr,newSize*sizeof(int));
//     printf("Enter %d new elements:\n",newSize);
//     for (int i = 0; i< newSize; i++)
//     {scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i< newSize; i++)
//     {
//         printf("%d",arr[i]);
//     }
    
//     return 0;
// }

