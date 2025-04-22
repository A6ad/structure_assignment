#include <stdio.h>
struct prob4
{
    int feet;
    int inch;
};
int main() {
    struct prob4 d1,d2,sum;
    printf("enter feet\n");
    scanf("%d",&d1.feet);
    printf("enter inch\n");
    scanf("%d",&d1.inch);

    printf("enter feet\n");
    scanf("%d",&d2.feet);
    printf("enter inch\n");
    scanf("%d",&d2.inch);
    
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if(sum.inch>=12)
    {
        sum.inch -= 12;
        sum.feet += 1;
    }


    printf("Distance: %dfeet %dinch",sum.feet,sum.inch);
    return 0;
}