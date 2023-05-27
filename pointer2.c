#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    int rollNumber;
};

void addStudent(struct Student **students, int *count) {
    struct Student newStudent;
    printf("Enter student name: ");
    scanf("%s", newStudent.name);
    printf("Enter student age: ");
    scanf("%d", &newStudent.age);
    printf("Enter student roll number: ");
    scanf("%d", &newStudent.rollNumber);

    (*count)++; // Increase the count of students

    // Allocate memory for the new student record
    *students = (struct Student*)realloc(*students, (*count) * sizeof(struct Student));
    if (*students == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(1);
    }

    // Add the new student record to the array
    (*students)[(*count) - 1] = newStudent;

    printf("Student record added successfully!\n");
}

void viewStudents(struct Student *students, int count) {
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Age: %d, Roll Number: %d\n", students[i].name, students[i].age, students[i].rollNumber);
    }
    printf("----------------------\n");
}

void deleteStudents(struct Student **students, int *count) {
    // Deallocate the memory for the student records
    free(*students);
    *students = NULL;

    *count = 0;
    printf("All student records deleted!\n");
}

int main() {
    struct Student *students = NULL;
    int count = 0;
    int choice;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Delete Students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(&students, &count);
                break;
            case 2:
                viewStudents(students, count);
                break;
            case 3:
                deleteStudents(&students, &count);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

