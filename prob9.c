#include <stdio.h>
#include <string.h>



struct Student {
    int rollNo;
    char name[50];
    int age;
    char address[100];
};

void printStudentsAge14(struct Student students[], int count) {
    printf("Students with age 14:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].age == 14) {
            printf("- %s (Roll No: %d)\n", students[i].name, students[i].rollNo);
        }
    }
}

void printStudentsEvenRoll(struct Student students[], int count) {
    printf("Students with even roll numbers:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo % 2 == 0) {
            printf("- %s (Roll No: %d)\n", students[i].name, students[i].rollNo);
        }
    }
}

void displayStudentByRoll(struct Student students[], int count, int rollNo) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            printf("Student Details:\n");
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Address: %s\n", students[i].address);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No student found with Roll No %d\n", rollNo);
    }
}

int main() {
    struct Student students[8] = {
        {10,"Asad", 22,"chandpur" },
        {5,"mahmud", 23,"jamalpur"},
        {4,"Bappy", 21,"Barishal"},
        {6,"nazim", 24,"gopalganj"},
        {8,"mahir", 21, "cumilla"},
        {9,"anurag", 20, "cumilla"},
        {11,"samrat", 10, "cumilla"},
        {13,"siyam", 8, "Belgium"}
    };

    printStudentsAge14(students, 8);
    printf("\n");
    printStudentsEvenRoll(students,8);
    printf("\n");

    int searchRoll;
    printf("Enter roll number to search: ");
    scanf("%d", &searchRoll);
    displayStudentByRoll(students, 8, searchRoll);

    return 0;
}