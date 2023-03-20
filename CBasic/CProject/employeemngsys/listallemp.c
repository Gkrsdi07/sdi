#define MAX_EMPLOYEES 100

struct employee {
    int id;
    char name[50];
    float salary;
};

 


void list_employees() {
    struct employee employees[MAX_EMPLOYEES];
    int num_employees = 0;
    printf("ID\tName\tSalary\n");
    for (int i = 0; i < num_employees; i++) {
        printf("%d\t%s\t%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
    return;
}
