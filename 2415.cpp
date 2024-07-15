#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ull N, presentSequence = 0, g_aux = INT_MAX, greaterSequence = 0, num;

    cin >> N;

    while(N--) {
        cin >> num;
        if(g_aux != num) {
            if(greaterSequence < presentSequence)
                greaterSequence = presentSequence;
            presentSequence = 1;
            g_aux = num;
        }
        else
            presentSequence++;
    }

    printf("%llu\n", presentSequence > greaterSequence ? presentSequence : greaterSequence);

    return 0;
};