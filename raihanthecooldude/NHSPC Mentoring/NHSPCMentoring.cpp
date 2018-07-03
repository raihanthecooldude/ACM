#include <stdio.h>
int main ()
{
    int pen=0,limit=20,visits=0;
    for (int i=0; pen<limit; i++)
    {
        pen = pen + 3;
        if (pen%2==0)
        {
            pen = pen -2;
        }
        visits++;
    }

    printf ("%d", visits);

    return 0;
}
