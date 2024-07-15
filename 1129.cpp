#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
#define rep(i,a,b) for(int i = int(a); i < int(b) ; i++)
#define rep2(i,a,b) for(int i = int(a); i > int(b) ; i--)
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N;

    while(cin >> N && N != 0) {
        while(N--) {
            char pos = 'A';
            int ans = 0;
            int c;
            rep(i,0,5) {
                cin >> c;
                if(c <= 127) {
                    if(ans == 0)
                        pos += i;
                    ans++;
                }

            }
            cout << (ans == 1 ? pos : '*') << endl;
        }
    }

    return 0;
};