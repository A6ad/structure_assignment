#include <stdio.h>


struct Student {
    int roll;
    char name[50];
    int age;
};

int main() {
    struct Student students[5] = {
        {1, "Asad", 18},
        {2, "Bappy", 19},
        {3, "Sayem", 18},
        {4, "Siam", 19},
        {5, "Mahmud", 20}
    };

    int searchRoll;
    printf("Enter Roll No to Find Details: ");
    scanf("%d", &searchRoll);

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (students[i].roll == searchRoll) {
            printf("Information of Roll No: %d\n", searchRoll);
            printf("------------------------------\n");
            printf("Roll No: %d\n", students[i].roll);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with Roll No %d not found.\n", searchRoll);
    }

    return 0;
}
