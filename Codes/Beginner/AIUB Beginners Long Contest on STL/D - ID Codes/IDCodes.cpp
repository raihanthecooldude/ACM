#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
typedef long long ll;
typedef stringstream ss;

int main()
{
	char code[52];
	string s;

	while(1)
	{
		cin>>s;

		if(s == "#")
        {
            break;
        }

		strcpy(code, s.c_str());

		int n=strlen(code);

		if(next_permutation(code, code+n))
		{
			cout<<code<<endl;
		}
		else
        {
			printf("No Successor\n");
        }

	}
	return 0;
}
