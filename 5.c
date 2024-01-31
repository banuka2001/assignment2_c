#include <stdio.h>

int main () {

    typedef struct{
        int age;
        char name[20];
         } record;

    record studentDetails[3];
   
   for (int i=0; i<3; i++) {  
    printf("Enter Name of the student: ");
        scanf("%s",&studentDetails[i].name);
    printf("Enter age of the student: ");
        scanf("%d",&studentDetails[i].age);
   }

    for (int i=0; i<3; i++){ 
        if (studentDetails[i].age >= 15 && studentDetails[i].age <= 25) {
            printf("Name is : %s \nAge is : %d\n\n",studentDetails[i].name,studentDetails[i].age);
            }
    }
   
}  