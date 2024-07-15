#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(); 

    int N;
    double A;
    int count;

    cin>>N;

    //primeira soplução
    /*while(N) {
        
        count = 0;
        cin>>A;

        while(A > 1) {
            A /= 2;
            count++;
        }
        cout<<count<<" dias\n";
        N--;
    }*/

    //segunda solução
    while(N) {
        cin>>A;
        printf("%d dias\n",(int)ceil(log2(A)));
        N--;
    }

    return 0;
}