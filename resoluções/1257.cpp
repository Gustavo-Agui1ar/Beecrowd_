#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int calcStr(int p , string str) {
    
    int sum = p*str.size();

    for(ull i = 0 ; i < str.size() ; i++) {
        sum += (str[i] - 'A') + i;
    }
    return sum;
}

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(); 

    int N,L,sum;
    string str;

    cin>>N;

    while(N) {
        sum = 0;
        cin>>L;
        int i = 0;
        while(i < L) {
            cin>>str;
            sum += calcStr(i, str);
            i++;
        }
        printf("%d\n",sum);
        N--;
    }

    return 0;
}