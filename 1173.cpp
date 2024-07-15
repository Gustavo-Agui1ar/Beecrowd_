#include <bits/stdc++.h>
 
using namespace std;

#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int N;

    cin>>N;

    rep(i,0,10) {
        printf("N[%d] = %d\n", i, N);
        N += N;
    }
    
    return 0;
};