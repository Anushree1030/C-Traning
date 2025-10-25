//lead code
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int height[9]={1,8,6,2,5,4,8,3,7};
//     int i=0;
//     int j=8;
//     int maxArea=0;
//     while(i<j)
//     {
//         int h;
//         if(height[i]<height[j]){
//             h=height[i];
//         }else
//         {
//             h=height[j];
//         }
//         int w=j-1;
//         int area=h*w;
//         if(area>maxArea){
//             maxArea=area;
//         }
//         if(height[i]<height[j]){
//             i++;
//         }else
//         {
//             j--;
//         }
        
//     }
    
//      printf("%d",maxArea) ;
// }
//output:49


//structure
// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     char name[50];
//     int rollno;
//     int age;
// };
// int main(){
//     struct student s1;
//     s1.age=15;
//     printf("%d",s1.age);
//     s1.rollno=59;
//     printf("\n%d",s1.rollno);
//     strcpy(s1.name,"hello");
//     printf("\n%s",s1.name);
    

// }



#include <stdio.h>
#include <string.h>
  
struct Addressss
{
    int pinCode;
};

struct Student {
    char name[50];
    int RollNo;
    int age;
    struct Addressss s2; 
    
};

int main() {
    struct Student s1; 
    
    s1.age = 15;
    s1.s2.pinCode=482001;

     strcpy(s1.name,"hello");

    printf("Age: %d\n", s1.age);
    printf("Name: %s\n", s1.name); 

    return 0;
}

