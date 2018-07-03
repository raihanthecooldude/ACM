#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define UMAX 9223372036854775807
#define MAXARRAY 2000002
#define ll long long
#define nl '\n'
#define xx first
#define yy second
#define pb push_back
#define ss stringstream

int main() {
	int n;

	while (scanf("%d", &n), n)
    {
        priority_queue<int, vector<int>, greater<int> > q;

		while (n--)
        {
			int x;
			scanf("%d", &x);
			q.push(x);
		}

		int total = 0, cost = 0;
		while (q.size() > 1)
        {
			total=q.top();
			q.pop();
			total=total+q.top();
			q.pop();
			cost=cost+total;
			q.push(total);
		}

		printf("%d\n", cost);
	}

	return 0;
}
