#include <stdio.h>

int roll[10], marks[10], n;
char name[10][50];

void addStudents() {
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }
}

void displayStudents() {
    int i;

    printf("\n----- Student Details -----\n");

    for(i = 0; i < n; i++) {
        printf("Roll No : %d\n", roll[i]);
        printf("Name    : %s\n", name[i]);
        printf("Marks   : %d\n\n", marks[i]);
    }
}

int main() {
    addStudents();
    displayStudents();

    return 0;
}
