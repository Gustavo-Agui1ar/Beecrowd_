#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(); 

    int N;
    int grain;

    cin>>N;

    while(N) {
        cin>>grain;
        double b = pow(2,grain);
        printf("%.lf kg\n", trunc(b/12000));
        N--;
    }

    return 0;
}