#define MAX_EMPLOYEES 100

struct employee {
    int id;
    char name[50];
    float salary;
};


void add_employee() {
    struct employee employees[MAX_EMPLOYEES];
    int num_employees = 0;
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
    return;
}
