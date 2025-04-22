#include <stdio.h>

struct Marks {
    int roll;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    struct Marks students[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Chemistry Marks: ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics Marks: ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics Marks: ");
        scanf("%d", &students[i].phy_marks);
    }

    printf("\nPercentage of Each Student:\n");
    for (int i = 0; i < 5; i++) {
        float percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;
        printf("Roll No: %d, Name: %s, Percentage: %.2f%%\n",
               students[i].roll, students[i].name, percentage);
    }

    return 0;
}
