#include<stdio.h>

int main()
{
    int n;

    printf("\tMailing List Menu:\n\n1. Enter Address\n2. Delete Address\n3. Search The List\n4. Print The List\n5.Quit\n\nEnter the number of your choice (1-5)\n");

    scanf("%d", &n);

    if(n==1)
    {
        printf("Enter Address Menu Open\n");
    }
    else if(n==2)
    {
        printf("Delete Address Menu Open\n");
    }
    else if (n==3)
    {
        printf("Search The List Menu Open\n");
    }
    else if(n==4)
    {
        printf("Print The List Menu Open\n");
    }
    else if(n==5)
    {
        printf("Quit Menu Open\n");
    }

    return 0;
}
