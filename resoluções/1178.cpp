#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double T; 

    cin >> T;

    rep(i,0,100) {
        printf("N[%d] = %.4lf\n", i, T);
        T /= 2;
    }
    
    return 0;
};