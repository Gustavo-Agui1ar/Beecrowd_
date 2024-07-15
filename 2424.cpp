#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int x,y;
    cin >> x >> y;

    if(x >= 0 && x <= 432 && y <= 468 && y >= 0)
        puts("dentro");
    else 
        puts("fora");

    return 0;
};