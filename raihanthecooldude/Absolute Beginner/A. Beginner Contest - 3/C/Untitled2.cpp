#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int i,j, c=0;
    char a[1000];

        scanf("%[^}]c", a);


    i=0;
    while(a[i]!=125)
    {
        for (j=1;j<i;j+=3)
        {
            if (a[i]==a[j])
            {
                continue;
            }
            c++;
        }

        i++;
    }

    printf("%d\n", c);

    return 0;
}
