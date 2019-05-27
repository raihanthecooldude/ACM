#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005

int main()
{
    int n, year, month, days;

    scanf("%d", &n);

    year=n/365;
    n=n-(365*year);
    month=n/30;
    n=n-(30*month);
    days=n;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, days);


  return 0;
}
