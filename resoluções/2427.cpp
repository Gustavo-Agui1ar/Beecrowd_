    #include <bits/stdc++.h>
    
    using namespace std;

    typedef unsigned long long ull;
    
    #define _                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); 

    int main() {
        _;

        ull N;

        cin >> N;

        N = (ull)log2(N);
        N = pow(4,N);

        cout << N << endl;

        return 0;
    };