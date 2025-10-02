/*
NAME: SAMUEL NJOROGE 
REG: CT101/G/26428/25
DESCRIPTION: Check for exam eligibility
*/

#include <stdio.h>

int main() {
    int attendance;
    int average_marks;
    
    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);
    
    printf("Enter average marks: ");
    scanf("%d", &average_marks);
    
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }
    
    return 0;
}
