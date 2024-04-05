/* WAP to calculate the grade of an employee (as done in pro no 10) and also calculate
    HRA, TA, DA, PF, GrossSalary and NETSalary as per the following table. 
    
        |  HRA  |   TA    |   DA    |   PF
      A |  14%  |  1000/- |  110%   |  14%         GrossSalary = basic + HRA + TA + DA
      B |  12%  |  800/-  |  110%   |  12%         NETSalary = GrossSalary - PF
      C |  10%  |  600/-  |  110%   |  08%     
        |       |         |         |      
    */

#include <stdio.h>
int main() {
    int salary;
    char grade;
    float HRA, TA, DA, PF, GrossSalary, NETSalary;

    printf("Enter the basic Salary : ");
    scanf("%d", &salary);

    // Determining the employee grade
    if(salary > 5000) {
        printf("Employee Grade : A\n");
        grade = 'A';
    } else if(salary <= 5000 && salary > 3000) {
        printf("Employee Grade : B\n");
        grade = 'B';
    } else {
        printf("Employee Grade : C\n");
        grade = 'C';
    }

    // Calculating salary components based on grade
    if(grade == 'A') {
        HRA = salary * 0.14;
        TA = 1000;
        DA = 1.1 * salary;
        PF = 0.14 * salary;
    } else if(grade == 'B') {
        HRA = 0.12 * salary;
        TA = 800;
        DA = 1.1 * salary;
        PF = 0.12 * salary;
    } else {
        HRA = 0.10 * salary;
        TA = 600;
        DA = 1.1 * salary;
        PF = 0.08 * salary;
    }

    // Calculating Gross Salary and Net Salary
    GrossSalary = salary + HRA + TA + DA;
    NETSalary = GrossSalary - PF;

    // Printing the results
    printf("\nGrossSalary = %.2f\nNetSalary = %.2f\n", GrossSalary, NETSalary);

    return 0;
}
