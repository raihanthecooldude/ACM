#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using namespace std;

map<string, int> m;

int main() {
    int t;
    double counts = 0;
    string s;
    map<string, int>::iterator it;
    cin >> t;
    getchar();
    getchar();
    while(t--) {
        while(getline(cin, s) && s != "") {
            m[s]++;
            counts++;
        }
        for(it = m.begin(); it != m.end(); it++) {
            cout << it->first << " ";
            printf("%0.4lf\n", it->second / counts * 100);
        }
        if(t != 0)
            printf("\n");
        counts = 0;
        m.clear();
    }
    return 0;
}
