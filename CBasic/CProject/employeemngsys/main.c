#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empms.h"

#define MAX_EMPLOYEES 100

struct employee {
    int id;
    char name[50];
    float salary;
};

/*void add_employee(struct employee emp);
void list_employees(struct mployee emp);
void search_employee(struct mployee emp);
void delete_employee(struct mployee emp);*/


int main(){
    struct employee employees[MAX_EMPLOYEES];
    int num_employees = 0;
    int choice;
    while (1) {
        printf("Employee Management System\n");
        printf("1. Add employee\n");
        printf("2. List employees\n");
        printf("3. Search employee\n");
        printf("4. Delete employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_employee();
                break;
            case 2:
                list_employees();
                break;
            case 3:
                search_employee();
                break;
            case 4:
                delete_employee();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
    return 0;
}
