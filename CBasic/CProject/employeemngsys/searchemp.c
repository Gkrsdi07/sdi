#define MAX_EMPLOYEES 100

struct employee {
    int id;
    char name[50];
    float salary;
};


void search_employee() {
     struct employee employees[MAX_EMPLOYEES];
    int num_employees = 0;
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
    return;
}