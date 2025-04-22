#include <stdio.h>
struct prob3
{
    int date;
    int month;
    int year;
};

int main() {
struct prob3 s1,s2;

scanf("%d %d %d",&s1.date,&s1.month,&s1.year);
scanf("%d %d %d",&s2.date,&s2.month,&s2.year);

if(s1.date == s2.date && s1.month == s2.month && s1.year == s2.year)
{
    printf("Dates are equal\n");
}
else 
{
    printf("Dates are not equal\n");
}

    return 0;
}