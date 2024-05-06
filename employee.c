#include<stdio.h>

struct EMPLOYEE {
    int employee_Number, Basic, DA, IT, Net_Sal, gross;
    char employee_Name[1000];
};

void printEmployeeDetails(struct EMPLOYEE emp) {
    printf("\nEmployee Number: %d\n", emp.employee_Number);
    printf("Employee Name: %s\n", emp.employee_Name);
    printf("Basic Salary: %d\n", emp.Basic);
    printf("Dearness Allowance: %d\n", emp.DA);
    printf("Income Tax: %d\n", emp.IT);
    printf("Gross Salary: %d\n", emp.gross);
    printf("Net Salary: %d\n", emp.Net_Sal);
    printf("-----------------------------\n");
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct EMPLOYEE employee[n];

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employee[i].employee_Number);
        printf("Employee Name: ");
        scanf(" %[^\n]s", employee[i].employee_Name);
        printf("Basic Salary: ");
        scanf("%d", &employee[i].Basic);
        employee[i].DA = 0.54 * employee[i].Basic;
        employee[i].gross = employee[i].DA + employee[i].Basic;
        employee[i].IT = 0.3 * (employee[i].DA + employee[i].Basic);
        employee[i].Net_Sal = employee[i].gross - employee[i].IT;
    }

    printf("\nEmployee Details:\n");
    for(int i = 0; i < n; i++) {
        printf("\nDetails for employee %d:\n", i + 1);
        printEmployeeDetails(employee[i]);
    }

    return 0;
}
