#include <stdio.h>

int main()
{
    int i, billno[5], bill[5], units[5];
    char name[5][50];

    for (i = 0; i < 5; i++)
    {
        
        scanf("%s", name[i]);
	scanf("%d", &billno[i]);
	scanf("%d", &units[i]);

        if (units[i] < 100 && units[i] > 0)
        {
            bill[i] = 0;
        }
        else if (units[i] >= 100 && units[i] < 400)
        {
            bill[i] = 2.25 * units[i];
        }
        else if (units[i] >= 400 && units[i] < 500)
        {
            bill[i] = 4 * units[i];
        }
        else if (units[i] >= 500 && units[i] < 600)
        {
            bill[i] = 6 * units[i];
        }
        else if (units[i] >= 600)
        {
            bill[i] = 8 * units[i];
        }
        else if (units[i] < 0)
        {
            printf("Invalid Input\n");
        }
    }

    for (i = 0; i < 5; i++)
    { 
        printf("Name: %s\n", name[i]);
        printf("Electricity bill number: %d\n", billno[i]);
        printf("Units consumed: %d\n", units[i]);
        printf("Electricity bill: %d\n", bill[i]);
    }

    return 0;}
    
    
