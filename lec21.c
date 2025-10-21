//string

// #include <stdio.h>
// int main(){
//     char name[]="hii";  //'\0' automatically add hota hai
//     printf("Name: %c",name[0]);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     char name[] = "ragini"; //'r','a','g','i','n','i','\0'
//     int i =0;
//     while(name[i] != '\0') {
//         printf("%c\n",name[i]);
//         i++;
//     }
//     return 0;

// }


            //inbuilt fn

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name[]="hii"; // 'h','i','i','\0'
//     int i =0;
//     int ln = strlen(name);
//     printf("%d",ln);
// }

//  #include <stdio.h>
//  #include <string.h>
//  int main(){
//     char name[] ="hii";
//     for(int i=0;name[i]='\0';i++){
//         printf("%c",name[i]);
//     }
//     return 0;
//  }


// #include <stdio.h>
// #include <string.h>
//  int main(){
//     char name[] ="hii";
//     char data[10];
//     for(int i=0;name[i]!='\0';i++){
//         data[i]=name[i];
//     }
//     printf("%s",data);
    
//  }



#include <stdio.h>
 #include <string.h>
 int main(){
    char name[]="madam";
    int ln= strlen(name);
    int isTrue=1;
    for(int i=0;i<ln/2;i++){
        if(name[i]!=name[ln-i-1]){
            isTrue=0;
            break;
        }
    }
    if (isTrue==1)
    {
        printf("palindrom hai");
    }
    else{
        printf("nhi hai");
    }
    return 0;

 }

