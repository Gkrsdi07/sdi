#include <stdio.h>
#include <stdlib.h>
#include <string.h>










int main() {
   
}




/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define MAX_Std 100

struct SDetails
{
    char CollName[50];
    int SReg_No;
    char SName[50];
    char SGender[5];
    char Dept[5];
};

struct SDetails SDetail[MAX_Std];
int num_student = 0;

void addStudents(void){
    if(num_student >= MAX_Std){
        printf("Reached Maximum Students");
        return;
    }

    struct SDetails std;

    printf("Enter The College Name: ");
    scanf("%s", &std.CollName);

    printf("Eneter The Reg. Number of Students: ");
    scanf("%d",&std.SReg_No);

    printf("Eneter The Name of Students: ");
    scanf("%s",&std.SName);

    printf("Eneter The Gender Of Students: ");
    scanf("%s",&std.SGender);

    printf("Eneter The Department of Students: ");
    scanf("%s",&std.Dept);

    SDetail[num_student++] = std;
}

void list_students(){
    printf("College:\tSRegNo:\tSName:\tSGender:\tSDept:\n");

    for(int i=0; i<num_student; i++){
        printf("%s\t%d\t%s\t%s\t%s\n",SDetail->CollName,SDetail->SReg_No,SDetail->SName,SDetail->SGender,SDetail->Dept);
    }
}

void search_students(){
    int std_id, i, j;
    printf("Eneter Student Reg NO to Search Student Marks: ");
    scanf("%d",&std_id);

    for(int i=0; i<num_student; i++){
        if(SDetail->SReg_No == std_id){
            printf("College:\tSRegNo:\tSName:\tSGender:\tSDept:\n");
            printf("%s\t%d\t%s\t%s\t%s\n",SDetail->CollName,SDetail->SReg_No,SDetail->SName,SDetail->SGender,SDetail->Dept);
            return;
        }
    }
    printf("Student with Reg No. %d Not foud.\n",std_id);
}



int main(){
    int choice;
    while (1)
    {
        printf("Student Marks with Details: \n");
        printf("1. Add Student\n");
        printf("2. List Students\n");
        printf("3. Search Student Marks With Details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudents();
            break;
        case 2: 
            list_students();
            break;
        case 3:
            search_students();
            break;
        case 4:
            exit(0);           
        
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
    return 0;
}
*/