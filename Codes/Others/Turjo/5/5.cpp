#include<stdio.h>
int a=10;
void test(int a, int b);
int main()
{
    int i, b=20;
    for(i=0; i<3; ++i)
    {
        test(a,b);

    }
}

void test(int a, int b)
{
    int c=30;
    static int d = 40;
    printf("%d %d %d %d \n", a, b, c, d);
    ++a;
    ++b;
    ++c;
    ++d;

}
