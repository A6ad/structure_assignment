#include <stdio.h>
struct student{
    int roll;
    char name[20];
    int age;
    int marks;
};
int main() {
    struct student s={2,"Abdullah Al Asad",22,82};

    printf("Roll:%d\n",s.roll);
    printf("Name:%s\n",s.name);
    printf("age:%d\n",s.age);
    printf("marks:%d\n",s.marks);
    return 0;
}