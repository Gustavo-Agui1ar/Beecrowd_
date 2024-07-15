#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int p1,p2,c1,c2;

    cin >> p1 >> c1 >> p2 >> c2;

    int t1 = p1*c1;
    int t2 = p2*c2;

    if(t1 == t2)
        puts("0");
    else if(t1 < t2)
        puts("1");
    else
        puts("-1");

    return 0;
};