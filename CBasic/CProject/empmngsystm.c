#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct employee {
    int id;
    char name[50];
    float salary;
};

struct employee employees[MAX_EMPLOYEES];
int num_employees = 0;

void add_employee() {
    if (num_employees >= MAX_EMPLOYEES) {
        printf("Maximum number of employees reached.\n");
        return;
    }
    struct employee emp;
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    employees[num_employees++] = emp;
}

void list_employees() {
    printf("ID\tName\tSalary\n");
    for (int i = 0; i < num_employees; i++) {
        printf("%d\t%s\t%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

void search_employee() {
    int emp_id;
    printf("Enter employee ID to search: ");
    scanf("%d", &emp_id);
    for (int i = 0; i < num_employees; i++) {
        if (employees[i].id == emp_id) {
            printf("ID\tName\tSalary\n");
            printf("%d\t%s\t%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", emp_id);
}

void delete_employee() {
    int emp_id, i, j;
    printf("Enter employee ID to delete: ");
    scanf("%d", &emp_id);
    for (i = 0; i < num_employees; i++) {
        if (employees[i].id == emp_id) {
            for (j = i; j < num_employees - 1; j++) {
                employees[j] = employees[j+1];
            }
            num_employees--;
            printf("Employee with ID %d deleted.\n", emp_id);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", emp_id);
}

int main() {
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
        }
    }
    return 0;
}