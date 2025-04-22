#include <stdio.h>
#include<math.h>
struct prob2
{
    int x1;
    int y1;
    int x2;
    int y2;
};

int main() {
    struct prob2 a;
    printf("Enter (x1,y1):\n");
    scanf("%d %d",&a.x1,&a.y1);

    printf("Enter (x2,y2):\n");
    scanf("%d %d",&a.x2,&a.y2);

    double s = sqrt((a.x2-a.x1)*(a.x2-a.x1) + (a.y2-a.y1)*(a.y2 - a.y1));

    printf("distance is:%.2f\n",s);
    return 0;
}