#include <bits/stdc++.h>
 
using namespace std;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int v[20];

    rep2(i,19,-1) {
        cin >> v[i];
    }

    rep(i,0,20) {
       printf("N[%d] = %d\n", i, v[i]);   
    }

    return 0;
};