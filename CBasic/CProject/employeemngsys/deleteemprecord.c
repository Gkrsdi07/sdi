#define MAX_EMPLOYEES 100

struct employee {
    int id;
    char name[50];
    float salary;
};



void delete_employee() {
     struct employee employees[MAX_EMPLOYEES];
    int num_employees = 0;

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
    return;
}