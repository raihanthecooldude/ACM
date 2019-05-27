#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    char a[300];
    int i,leng_th,wor_d,com_ma,st_op,li_ne,do_t;
    scanf("%[^$]s", a);
    system("cls");
    printf("%s", a);
    printf("\n\nResult:\n");
    leng_th=strlen(a);
    printf("\n\nTotal Character: %d\n", leng_th);

    wor_d=0;
    for (i=0;i<=300;i++)
    {
        if (a[i]==' ')
        {
            wor_d++;
        }
    }
    wor_d++;
    printf("\n\nTotal Words: %d\n", wor_d);

    com_ma=0;
    for (i=0;i<=300;i++)
    {
        if (a[i]==',')
        {
            com_ma++;
        }
    }
    printf("\n\nTotal Commas: %d\n", com_ma);

    st_op=0;
    for (i=0;i<=300;i++)
    {
        if (a[i]=='. ')
        {
            st_op++;
        }
    }
    printf("\n\nTotal Sentences: %d\n", st_op);

    li_ne=0;
    for (i=0;i<=300;i++)
    {
        if (a[i]=='\n')
        {
            li_ne++;
        }
    }
    li_ne++;
    printf("\n\nTotal Lines: %d\n", li_ne);

    do_t=0;
    for (i=0;i<=300;i++)
    {
        if (a[i]=='.')
        {
            do_t++;
        }
    }
    printf("\n\nTotal Dots: %d\n", do_t);


    return 0;
}
