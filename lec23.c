 //string
       //remove 'e' ,print hllo
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[] ="hello";
//     char target='e';
//     char nStr[100];
//     int j=0;
//     int ln= strlen(str);
//     for(int i=0;i<ln;i++){
//         if(str[i]!=target){
//             nStr[j]=str[i];
//             j++;
//         }
//     }
//     nStr[j]='\0';
//     printf("%s",nStr);
// }



      //first non repeating character
//  #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[]= "ababde";
//     int freq[256]={0};
//     int ln =strlen(str);
//     for (int i=0; i<ln ;i++){
//         freq[str[i]]++;
//     }
//     for(int i=0;i<ln;i++){
//         if (freq[str[i]]==1){
//             printf("%c",str[i]);
//             break;
//         }
//     }
// }
//output:- d



//print common alphabet in string Hello &Hii
 #include <stdio.h>
#include <string.h>
int main(){
    char str[]= "hello,hii";
    int freq[256]={0};
    int ln =strlen(str);
    for (int i=0; i<ln ;i++){
        freq[str[i]]++;
    }
    for(int i=0;i<ln;i++){
        if (freq[str[i]]>=2){
            printf("%c",str[i]);
            //break;
        }
         
    }
}







#include<stdio.h>
int main(){
    int num;
    printf("Enter the number ");
    scanf("%d" ,&num);
    if (num%2==0){
        printf("the number is even %d",num);
    }else{

        printf("the number is odd");
    }
}