#include<bits/stdc++.h>
using namespace std;

int top=-1, topb=-1;
char a[100], b[100], c[100];

void push(char value);
int pop(char array);
void pushb(char value);


void push(char value)
{
    top++;
    a[top]=value;
    c[top]=value;
}


int pop()
{
    int z;

    z=c[top];
    top--;

    return z;
}


void pushb(char value)
{
    topb++;
    b[topb]=value;
}



int main()
{
    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;

    int i, n=s.size(), count=0, x;

    for(i=0;i<n;i++)
    {
        push(s[i]);

    }

    for(i>n-1;i>=0;i--)
    {
        x=pop();
        pushb(x);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            count=0;
        }
        else
        {
            count=1;
            break;
        }
    }

    if(count==1)
    {
        cout<<"String is not Palindrome"<<endl;
    }
    else
    {
        cout<<"String is Palindrome"<<endl;
    }

    return 0;
}

