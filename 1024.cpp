#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

std::string firstCripto(string str) {

    for(ull i = 0 ; i < str.size() ; i++) {
        if(isalpha(str[i]))
            str[i] = str[i] + 3;
    }
    return str;
}

std::string secondCripto(string str) {
    reverse(str.begin(), str.end());
    return str;
}

std::string thirdCripto(string str ) {
    for(int i = str.size()/2; i < str.size() ; i++) {
        str[i] -= 1;
    }
    return str;
}
int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(); 

    string str;
    int N;

    cin>>N;
    cin.ignore();

    while(N) {
        
        getline(cin, str);

        str = firstCripto(str);
        str = secondCripto(str);
        str = thirdCripto(str);
        cout<<str<<endl;
        N--;
    }

    
    return 0;
}