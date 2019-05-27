#include<stdio.h>

void vugi_chugi_swap(int a, int b)
{

    int temp = a;
    a = b;
    b = temp;

}

void ashol_swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a = 5, b = 10;
    printf("a = %d b = %d\n", a, b);
    vugi_chugi_swap(a, b);
    printf("a = %d b = %d\n", a, b);
    ashol_swap(&a, &b);
    printf("a = %d b = %d\n", a, b);
}
