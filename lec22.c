 //DUPLICATE
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[]="hello";
//     int ln= strlen(str);
//     int count;
//     for(int i=0;i<ln;i++)
//     {count=0;
//         for(int j=0;j<i;j++){
//             if( str[i]==str[j]){
//                 count++;
//                 break;
//             }
//         }
//         if(count==0){
//             printf("%c",str[i]);
//         }
// }
// }


            //vowel
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[]="aiouabvs";
//     int vCount=0;
//     int cCount=0;
//     int ln=strlen(str);
//     for(int i =0;i<ln;i++){
//         char ch=str[i];
//         if(ch=='a'|| ch=='i' || ch=='o' ||ch=='e'){
//             vCount++;
//         }else{
//             cCount;
//         }
//     }
//     printf("%d",vCount);
    
    
// }



     //frequency count
#include <stdio.h>
#include <string.h>
int main(){
    char str[]= "abc";
    int freq[256]=[0];
    int ln =strlen(str);
    for (int i=0; i<ln i++){
        freq[str[i]]++;
    }
    for(int i=0;i<256;i++){
        if (freq[i]>0){
            printf("%c:%d\n",i,freq[i]);
        }
    }
}