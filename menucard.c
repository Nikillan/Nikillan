#include<stdio.h>
#include<string.h>
typedef struct menu
{
    char itemName[50];
    float cost;
}MENU;

int main()
{
    int orderNo;
    int count;
    int total;
    int yes;
    int itemCount[3] = {0};
    count = 0;
    total = 0;
    MENU item1, item2, item3;

    strcpy(item1.itemName,"Chicken Biriyani");
    item1.cost = 120;
    strcpy(item2.itemName,"Mutton Biriyani");
    item2.cost = 140;
    strcpy(item3.itemName,"Parotta");
    item3.cost = 10;
    printf("Welcome to Unavagam\n");
    printf("%-8s%-20s %-5s\n","Item No", "Item Name", "Cost");
    printf("%7d %-20s %.2f\n", 1, item1.itemName, item1.cost);
    printf("%7d %-20s %.2f\n", 2, item2.itemName, item2.cost);
    printf("%7d %-20s %.2f\n", 3, item3.itemName, item3.cost);

    printf("Enter item number\n");

    do
    {
        scanf("%d", &orderNo);
        switch(orderNo)
        {
            case 1:
                {
                    printf("Number of Chicken Biriyanis?\n");
                    scanf("%d", &count);
                    total = total + count * item1.cost;
                    printf("Total: %d", total);
                    itemCount[0] += 1;
                    break;
                }
            case 2:
                {
                    printf("Number of Mutton Biriyanis?\n");
                    scanf("%d", &count);
                    total = total + count * item2.cost;
                    printf("Total: %d", total);
                    itemCount[1] += 1;
                    break;
                }
            case 3:
                {
                    printf("Number of Parottas?\n");
                    scanf("%d", &count);
                    total = total + count * item3.cost;
                    printf("Total: %d", total);
                    itemCount[2] += 1;
                    break;
                }
        }
        printf("Any more orders?\n1 - Yes. 0 - No\n");
        scanf("%d", &yes);
    }while(yes);

    printf("Bill Summary\n", total);
    printf("%-8s%-20s %-5s%-5s\n","Item No", "Item Name","Qty", "Cost");
    if(itemCount[0] > 0)
    {
        printf("%7d %-20s %-5d%.2f\n", 1, item1.itemName,itemCount[0], itemCount[0] * item1.cost);
    }
    if(itemCount[1] > 0)
    {
        printf("%7d %-20s %-5d%.2f\n", 2, item2.itemName,itemCount[1], itemCount[1] * item2.cost);
    }
    if(itemCount[2] > 0)
    {
        printf("%7d %-20s %-5d%.2f\n", 3, item3.itemName,itemCount[2], itemCount[2] * item3.cost);
    }
    printf("%32s%5d\n", "Total:", total);
}
