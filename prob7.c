#include <stdio.h>
struct customer
{
    char name[20];
    int act_no;
    int balance;
};
void lowbalance(struct customer customers[],int count)
{
    printf("customers less then $200:\n");
    for(int i=0;i<count;i++)
    {
        if(customers[i].balance<200)
        {
            printf("-%s\n",customers[i].name);
        }
    }
}
void highbalance(struct customer customers[], int count) {
    printf("Adding $100 to customers with balance more than  $1000:\n");
    for (int i = 0; i < count; i++) {
       if(customers[i].balance>1000)
       {
        customers[i].balance += 100;
        printf("- %s: New balance = $%.2f\n", customers[i].name, customers[i].balance);
       }
    }
}

int main() {
    struct customer customers[] = {
        {"Asad", 1001, 150.50},
        {"mahmud", 1002, 2500.75},
        {"Bappy", 1003, 180.00},
        {"nazim", 1004, 1200.00},
        {"mahir", 1005, 95.25},
        {"anurag", 1006, 3000.50},
        {"samrat", 1007, 500.00},
        {"siyam", 1008, 1500.25}
      
    };
    lowbalance(customers,8);
    highbalance(customers,8);
    return 0;
}